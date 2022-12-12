#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	// User Input section.
	int h, m, s;		// HOUR MINUTE SECOND
	printf("Set your timer:\n");
	printf("Enter the hours you want your timer to run: ");
	scanf("%d", &h);
	printf("Enter the minutes you want your timer to run: ");
	scanf("%d", &m);
	printf("Enter the seconds you want your timer to run: ");
	scanf("%d", &s);

	// Logic section.
	// If the time is set to negetive
	if (h < 0 || m < 0 || s < 0)
	{
		system("cls");
		printf("You have set your timer to a negative time.\nINVALID INPUT\nPlease provide a valid time\n");
	}
	// If the time is set to zero
	else if (h == 0 && m == 0 && s == 0)
	{
		system("cls");
		printf("You have set your timer to 0\n");
	}
	// If everything is alright then the timer will start
	else
	{
		printf("Your counter started from %02d h : %02d m : %02d s\n", h, m, s);
		while(s > 0)
		{
			system("cls");
			if (s < 0)
			{
				//s = 0;
				goto min;
			}
			else
			{
				printf("Timer: %02d h : %02d m : %02d s", h, m, s);
				sleep(1);
				system("cls");
			}
			s--;
		}
		min:
		while(m > 0)
		{
			system("cls");
			if (m < 0)
			{
				//m = 0;
				goto hour;
			}
			else
			{
				printf("Timer: %02d h : %02d m : %02d s", h, m, s);
				sleep(60);
				system("cls");
			}
			m--;
		}
		hour:
		while(h > 0)
		{
			system("cls");
			if (h < 0)
			{
				// h = 0;
				// m = 0;
				// s = 0;
				goto end;
			}
			else
			{
				printf("Timer: %02d h : %02d m : %02d s", h, m, s);
				sleep(360);
				system("cls");
			}
			h--;
		}
	}

	end:
	printf("Your counter has ended\nRun the program again to restart the counter.\n");
	return 0;
}
