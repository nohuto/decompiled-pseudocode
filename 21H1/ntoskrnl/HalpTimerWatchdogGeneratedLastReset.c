/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1407BF010
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1407BEFE4 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  return HalpWatchdogTimer && (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
}
