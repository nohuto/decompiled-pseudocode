/*
 * XREFs of HalpTimerWatchdogResetCountdown @ 0x14039FE90
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x140521CF0 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     HalpSetTimer @ 0x140354420 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x14039FEEC (HalpTimerWatchdogWakeSetDueTime.c)
 */

__int64 HalpTimerWatchdogResetCountdown()
{
  __int64 result; // rax
  unsigned __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  if ( HalpWatchdogTimer )
  {
    if ( HalpTimerWatchdogArmed )
    {
      HalpSetTimer(HalpWatchdogTimer, 3u, HalpTimerWatchdogTimeout, 1, &v1);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      return HalpTimerWatchdogWakeSetDueTime();
    }
  }
  return result;
}
