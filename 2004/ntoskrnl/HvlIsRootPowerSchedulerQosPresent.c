/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1404EC754
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
