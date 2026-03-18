/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1409C715C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409C86E0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409C8890 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x1409C8B80 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x1409C94A0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409C9860 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A20 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409C9C20 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1409CA160 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1409CB738 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C12CC0, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C12CC0);
  }
}
