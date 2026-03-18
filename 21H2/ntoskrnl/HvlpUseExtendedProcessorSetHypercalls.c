/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x14039DECC
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14039DA34 (HvlFlushAddressSpaceTb.c)
 *     HvlFlushRangeListTb @ 0x14039DB1C (HvlFlushRangeListTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x14039DE70 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x140549B84 (HvlParkedVirtualProcessors.c)
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
