/*
 * XREFs of ViGetRealDmaOperation @ 0x1409D1A60
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14059F480 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14059F5B0 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14059F600 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14059F630 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14059F670 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1409CD5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CD820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CDA80 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409CDB30 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x1409CDC10 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CDCB0 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409CDE40 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409CE010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CE370 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1409CE530 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409CE5A0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1409CE670 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409CE6B0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409CE700 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CE8B0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409CE960 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CEA10 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409CEBA0 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x1409CEC70 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409CECC0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409CED00 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409CEE00 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x1409CF010 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1409CF050 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1409CF090 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1409CF100 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CF4C0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1409CF7C0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1409CF880 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CFA40 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CFC40 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1409CFF40 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1409D0180 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1409D1758 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1409D1C70 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C12D3C, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C12D3C);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
