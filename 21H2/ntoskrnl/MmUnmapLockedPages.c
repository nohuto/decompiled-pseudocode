/*
 * XREFs of MmUnmapLockedPages @ 0x14031CA30
 * Callers:
 *     MiValidateInPage @ 0x14023B570 (MiValidateInPage.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     HalPutScatterGatherList @ 0x14029E020 (HalPutScatterGatherList.c)
 *     MiZeroPageWrite @ 0x1402BFD18 (MiZeroPageWrite.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     SmKmUnlockMdl @ 0x1402D03EC (SmKmUnlockMdl.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402D7B74 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402D8524 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x1402DA854 (SmFpFree.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     MiUnlockFlushMdl @ 0x1403572B8 (MiUnlockFlushMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14036D1C0 (HalpDmaFreeChildAdapter.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2C20 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2D30 (HalFlushAdapterBuffersEx.c)
 *     HalInitializeBios @ 0x1403C4AB0 (HalInitializeBios.c)
 *     IopUnlockAndFreeMdl @ 0x1403F11E0 (IopUnlockAndFreeMdl.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5700 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C6020 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C68FC (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C7E8C (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferThin @ 0x1404CADB0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB2F0 (HalpAllocateCommonBufferThin.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x14052D750 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x14053908C (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14053D160 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x140541130 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140583854 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14058397C (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x140583DCC (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059FDA8 (SmPrepareForFatalPageError.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0608 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405B06C8 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x1406D4ED4 (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x140776FBC (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1407B7608 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864D90 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140865078 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140865364 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140865468 (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x140891398 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14089BDA0 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089C958 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C955C (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x14095AA80 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14095B040 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1409CE3C4 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E74E8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x140297640 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoTracker @ 0x14031CB40 (MiMappingHasIoTracker.c)
 *     MiRetardMdl @ 0x140530CF0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055F060 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DC9C (MiUnmapLockedPagesInUserSpace.c)
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
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
}
