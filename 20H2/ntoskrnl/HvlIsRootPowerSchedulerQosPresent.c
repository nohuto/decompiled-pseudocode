/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1404EFFCC
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
