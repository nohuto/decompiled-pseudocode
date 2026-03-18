/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1409CD17C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409CE700 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CE8B0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x1409CEBA0 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x1409CF4C0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CF880 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CFA40 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CFC40 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1409D0180 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1409D1758 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409D1C70 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C12CCC, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C12CCC);
  }
}
