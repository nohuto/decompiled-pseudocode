/*
 * XREFs of MmUnmapLockedPages @ 0x140224B70
 * Callers:
 *     MiUnlockFlushMdl @ 0x14022856C (MiUnlockFlushMdl.c)
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402CDD78 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402CEB30 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     HalPutScatterGatherList @ 0x14032EE70 (HalPutScatterGatherList.c)
 *     MiZeroPageWrite @ 0x14034D928 (MiZeroPageWrite.c)
 *     SmKmUnlockMdl @ 0x14035DBEC (SmKmUnlockMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14036ABB0 (HalpDmaFreeChildAdapter.c)
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     HalPutScatterGatherListV3 @ 0x14039FE90 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x14039FFA0 (HalFlushAdapterBuffersEx.c)
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     HalAllocateCommonBufferVector @ 0x1404C0810 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C1130 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C1A0C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C2F9C (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferThin @ 0x1404C5E80 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C63C0 (HalpAllocateCommonBufferThin.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x140528280 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x140533BBC (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x140537C90 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x14053BC60 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14057E414 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14057E53C (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x14057E98C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059A8D8 (SmPrepareForFatalPageError.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AB0A8 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405AB168 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x14060EF1C (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1407A3668 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140861A48 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140861D34 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140861E38 (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088E278 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x140898CA0 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x140899858 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x140957440 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140957A00 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1409CB3B4 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E44C8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140224C80 (MiMappingHasIoTracker.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x14052B820 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140559BC0 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v3; // r8d
  __int64 ByteOffset; // r9
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi

  v3 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = MiRetardMdl(MemoryDescriptorList, MemoryDescriptorList, 0LL);
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
    MiReleasePtes(&qword_140C4ED40, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
