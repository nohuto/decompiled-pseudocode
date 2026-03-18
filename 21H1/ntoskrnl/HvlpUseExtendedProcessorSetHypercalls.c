/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x14038CF5C
 * Callers:
 *     HvlFlushRangeListTb @ 0x14038CA2C (HvlFlushRangeListTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14038CEBC (HvlFlushAddressSpaceTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038CF00 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1404F24F0 (HvlParkedVirtualProcessors.c)
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
