/*
 * XREFs of RIMArmWatchDog @ 0x1C015B728
 * Callers:
 *     RIMWatchDog @ 0x1C006AD90 (RIMWatchDog.c)
 *     rimSignalReadComplete @ 0x1C017D180 (rimSignalReadComplete.c)
 * Callees:
 *     <none>
 */

BOOLEAN RIMArmWatchDog()
{
  BOOLEAN result; // al

  if ( gWatchDogTimer )
  {
    if ( !gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 1;
      return KeSetTimer(gWatchDogTimer, (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return result;
}
