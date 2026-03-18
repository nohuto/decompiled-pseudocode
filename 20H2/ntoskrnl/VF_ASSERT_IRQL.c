/*
 * XREFs of VF_ASSERT_IRQL @ 0x1409CD0FC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409CD5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CD820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CDA80 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409CDDA0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1409CE010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CE370 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1409CE960 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409CED00 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1409CEE70 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1409CF050 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1409CF100 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CFF40 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409D1C70 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140C12CC8, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C12CC8);
  }
}
