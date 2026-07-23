/*
 * XREFs of HalpTimerQueryProfileAvailability @ 0x1404C1AE4
 * Callers:
 *     DefaultQueryInformation @ 0x140864950 (DefaultQueryInformation.c)
 * Callees:
 *     <none>
 */

bool HalpTimerQueryProfileAvailability()
{
  return HalpProfileTimer != 0;
}
