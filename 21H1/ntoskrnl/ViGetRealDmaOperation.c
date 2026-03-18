/*
 * XREFs of ViGetRealDmaOperation @ 0x1409CBA30
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14059B2F0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14059B420 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14059B470 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14059B4A0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14059B4E0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1409C75A0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C77F0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409C7A50 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409C7B00 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x1409C7BE0 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409C7C80 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409C7E10 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8340 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1409C8500 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409C8570 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1409C8640 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409C8680 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409C86D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409C8880 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409C8930 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409C8B70 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x1409C8C40 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409C8C90 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409C8CD0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409C8DD0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x1409C8FE0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1409C9020 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1409C9060 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C9490 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1409C9790 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1409C9850 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A10 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409C9C10 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1409C9F10 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1409CA150 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1409CB728 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1409CBC40 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C12D18, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C12D18);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
