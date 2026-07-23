/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1403905DC
 * Callers:
 *     HvlFlushRangeListTb @ 0x1403900AC (HvlFlushRangeListTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14039053C (HvlFlushAddressSpaceTb.c)
 *     HvlSendSyntheticClusterIpi @ 0x140390580 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1404F7ED0 (HvlParkedVirtualProcessors.c)
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
