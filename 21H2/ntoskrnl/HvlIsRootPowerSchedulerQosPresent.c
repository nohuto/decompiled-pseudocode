/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x140543480
 * Callers:
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
