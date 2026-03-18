/*
 * XREFs of MmUnmapLockedPages @ 0x14027DBC0
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14023AF48 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14023BD00 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x14023D59C (SmFpFree.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     MiUnlockFlushMdl @ 0x1402815BC (MiUnlockFlushMdl.c)
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     HalPutScatterGatherList @ 0x1402F30D0 (HalPutScatterGatherList.c)
 *     MiZeroPageWrite @ 0x140310298 (MiZeroPageWrite.c)
 *     SmKmUnlockMdl @ 0x14032009C (SmKmUnlockMdl.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     HalPutScatterGatherListV3 @ 0x14039F700 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x14039F810 (HalFlushAdapterBuffersEx.c)
 *     HalInitializeBios @ 0x1403C0D20 (HalInitializeBios.c)
 *     HalAllocateCommonBufferVector @ 0x1404C03A0 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C0CC0 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C2B2C (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferThin @ 0x1404C59D0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C5F10 (HalpAllocateCommonBufferThin.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x140527C30 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x14053356C (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x140537640 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x14053B610 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14057DDD4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14057DEFC (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x14057E34C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059A1E8 (SmPrepareForFatalPageError.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AA9B8 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405AAA78 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x14064414C (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x14079F688 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x14086074C (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140860A38 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140860B3C (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088CF58 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x140897980 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x140898538 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x140955D70 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140956330 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1409CB3A4 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E4468 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiMappingHasIoTracker @ 0x14027DCD0 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x14052B1D0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140559570 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
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
    MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
}
