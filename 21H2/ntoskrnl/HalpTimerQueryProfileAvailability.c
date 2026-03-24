/*
 * XREFs of HalpTimerQueryProfileAvailability @ 0x1404C18A4
 * Callers:
 *     DefaultQueryInformation @ 0x1408647F0 (DefaultQueryInformation.c)
 * Callees:
 *     <none>
 */

bool HalpTimerQueryProfileAvailability()
{
  return HalpProfileTimer != 0;
}
