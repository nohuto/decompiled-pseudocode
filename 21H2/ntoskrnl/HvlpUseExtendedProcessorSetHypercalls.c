/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x14039048C
 * Callers:
 *     HvlFlushRangeListTb @ 0x14038FF5C (HvlFlushRangeListTb.c)
 *     HvlFlushAddressSpaceTb @ 0x1403903EC (HvlFlushAddressSpaceTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x140390430 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1404F7F50 (HvlParkedVirtualProcessors.c)
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
