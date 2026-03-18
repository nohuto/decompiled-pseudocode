/*
 * XREFs of HalpTimerQueryProfileAvailability @ 0x1404BC9B4
 * Callers:
 *     DefaultQueryInformation @ 0x1408611D0 (DefaultQueryInformation.c)
 * Callees:
 *     <none>
 */

bool HalpTimerQueryProfileAvailability()
{
  return HalpProfileTimer != 0;
}
