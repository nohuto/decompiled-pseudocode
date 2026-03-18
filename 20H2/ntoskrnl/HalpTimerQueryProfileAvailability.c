/*
 * XREFs of HalpTimerQueryProfileAvailability @ 0x1404BFED4
 * Callers:
 *     DefaultQueryInformation @ 0x140866BF0 (DefaultQueryInformation.c)
 * Callees:
 *     <none>
 */

bool HalpTimerQueryProfileAvailability()
{
  return HalpProfileTimer != 0;
}
