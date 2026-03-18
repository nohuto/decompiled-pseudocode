/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x14038DACC
 * Callers:
 *     HvlFlushRangeListTb @ 0x14038D59C (HvlFlushRangeListTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14038DA2C (HvlFlushAddressSpaceTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038DA70 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1404F2B40 (HvlParkedVirtualProcessors.c)
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
