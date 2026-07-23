/*
 * XREFs of MmUnmapLockedPages @ 0x140327780
 * Callers:
 *     HalPutScatterGatherList @ 0x14021B580 (HalPutScatterGatherList.c)
 *     MiZeroPageWrite @ 0x14023E168 (MiZeroPageWrite.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     SmKmUnlockMdl @ 0x14024E76C (SmKmUnlockMdl.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140289874 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x14028BBA4 (SmFpFree.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     MiUnlockFlushMdl @ 0x140362008 (MiUnlockFlushMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14036D370 (HalpDmaFreeChildAdapter.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2D70 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2E80 (HalFlushAdapterBuffersEx.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     IopUnlockAndFreeMdl @ 0x1403F1110 (IopUnlockAndFreeMdl.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C6260 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C80CC (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferThin @ 0x1404CAFF0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB530 (HalpAllocateCommonBufferThin.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x14052D990 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x1405392CC (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14053D3A0 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x140541370 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140583A84 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x140583BAC (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x140583FFC (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059FFD8 (SmPrepareForFatalPageError.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0838 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405B08F8 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x1406AC1B4 (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7B28 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408651D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1408655C8 (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408914F8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14089BF00 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x14095AC50 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14095B210 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1409CF3C4 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E84E8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMappingHasIoTracker @ 0x140327890 (MiMappingHasIoTracker.c)
 *     MiRetardMdl @ 0x140530F30 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055F2A0 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DE5C (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v3; // r8d
  __int64 ByteOffset; // r9
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi

  v3 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = MiRetardMdl(MemoryDescriptorList);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v6 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace((ULONG_PTR)BaseAddress);
  }
  else
  {
    v7 = (unsigned __int64)BaseAddress - v3;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    if ( (unsigned int)MiMappingHasIoTracker(v7) == 1 )
      MiZeroAndFlushPtes(v7, v6);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v6) = v6 + 1;
    if ( (dword_140CFB17C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
}
