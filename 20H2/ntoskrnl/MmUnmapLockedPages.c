/*
 * XREFs of MmUnmapLockedPages @ 0x140295370
 * Callers:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402553C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140255D74 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x1402580A4 (SmFpFree.c)
 *     MiUnlockFlushMdl @ 0x14029F3E4 (MiUnlockFlushMdl.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     HalPutScatterGatherList @ 0x140301D80 (HalPutScatterGatherList.c)
 *     MiZeroPageWrite @ 0x14031E678 (MiZeroPageWrite.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     SmKmUnlockMdl @ 0x1403592D0 (SmKmUnlockMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB90 (HalpDmaFreeChildAdapter.c)
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2360 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2470 (HalFlushAdapterBuffersEx.c)
 *     HalInitializeBios @ 0x1403C4350 (HalInitializeBios.c)
 *     IopUnlockAndFreeMdl @ 0x1403F04DC (IopUnlockAndFreeMdl.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C4650 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C64BC (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferThin @ 0x1404C93E0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x14052BC50 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x14053758C (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14053B660 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x14053F630 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140581E44 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x140581F6C (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405823BC (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059E378 (SmPrepareForFatalPageError.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AEC08 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405AECC8 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x14070AF2C (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1407B2998 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140867468 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140867754 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140867858 (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x140893DC8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14089E7D0 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089F388 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x14095D200 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14095D7C0 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1409D13D4 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1409EA4E8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMappingHasIoTracker @ 0x140295480 (MiMappingHasIoTracker.c)
 *     MiRetardMdl @ 0x14052F1F0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14055D590 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140769C5C (MiUnmapLockedPagesInUserSpace.c)
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
    MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v6);
  }
}
