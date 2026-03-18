/*
 * XREFs of ViGetRealDmaOperation @ 0x1409CBA40
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14059B9E0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x14059BB10 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x14059BB60 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x14059BB90 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x14059BBD0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409C7A60 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409C7B10 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x1409C7BF0 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409C7C90 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409C7E20 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409C7FF0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8350 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1409C8510 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409C8580 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1409C8650 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409C8690 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409C86E0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409C8890 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409C8940 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89F0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409C8B80 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x1409C8C50 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409C8CA0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409C8CE0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409C8DE0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x1409C8FF0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1409C9030 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1409C9070 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1409C90E0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C94A0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1409C97A0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1409C9860 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A20 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409C9C20 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1409C9F20 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1409CA160 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1409CB738 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C12D38, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C12D38);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
