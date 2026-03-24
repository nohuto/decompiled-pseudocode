/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1407D5140
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1407D5114 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  return HalpWatchdogTimer && (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
}
