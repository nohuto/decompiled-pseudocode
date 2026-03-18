/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x14038FFBC
 * Callers:
 *     HvlFlushRangeListTb @ 0x14038FA8C (HvlFlushRangeListTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14038FF1C (HvlFlushAddressSpaceTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038FF60 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1404F63B0 (HvlParkedVirtualProcessors.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
