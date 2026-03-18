/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1404EC10C
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
