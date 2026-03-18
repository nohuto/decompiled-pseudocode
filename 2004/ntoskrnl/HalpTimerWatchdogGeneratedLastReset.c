/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1407C2510
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1407C24E4 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  return HalpWatchdogTimer && (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
}
