/*
 * XREFs of HalpTimerQueryProfileAvailability @ 0x1404BC2D4
 * Callers:
 *     DefaultQueryInformation @ 0x14085FE80 (DefaultQueryInformation.c)
 * Callees:
 *     <none>
 */

bool HalpTimerQueryProfileAvailability()
{
  return HalpProfileTimer != 0;
}
