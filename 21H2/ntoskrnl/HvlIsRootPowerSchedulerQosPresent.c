/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1404F1AEC
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
