/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1404F1B6C
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
