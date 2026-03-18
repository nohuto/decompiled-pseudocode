/*
 * XREFs of VF_ASSERT_IRQL @ 0x1409C70DC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409C7A60 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409C7D80 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1409C7FF0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8350 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1409C8940 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409C8CE0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1409C8E50 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1409C9030 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1409C90E0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409C9F20 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C12CD4, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C12CD4);
  }
}
