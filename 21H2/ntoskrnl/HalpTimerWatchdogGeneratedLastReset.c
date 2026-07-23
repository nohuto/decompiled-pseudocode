/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1407D52B0
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1407D5284 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  return HalpWatchdogTimer && (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
}
