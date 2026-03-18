/*
 * XREFs of MmUnmapLockedPages @ 0x1402BB4E0
 * Callers:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     HalPutScatterGatherListV2 @ 0x140230618 (HalPutScatterGatherListV2.c)
 *     MiInitializeNewImageSectionProtos @ 0x140243208 (MiInitializeNewImageSectionProtos.c)
 *     MiZeroPageWrite @ 0x1402459E8 (MiZeroPageWrite.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     SmKmUnlockMdl @ 0x140379C24 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14037BD80 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14037C6BC (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x140457742 (HalpDmaReleaseBufferMappings.c)
 *     HalFreeCommonBufferVector @ 0x140511760 (HalFreeCommonBufferVector.c)
 *     HalPutScatterGatherListV3 @ 0x140511A58 (HalPutScatterGatherListV3.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140511BD0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFreeChildAdapter @ 0x140513870 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x140514920 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x140515B80 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferDmarThin @ 0x140516290 (HalFreeCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405164D0 (HalpAllocateCommonBufferDmarThin.c)
 *     HalFlushAdapterBuffersEx @ 0x140516D80 (HalFlushAdapterBuffersEx.c)
 *     IopUnlockAndFreeMdl @ 0x1405570D0 (IopUnlockAndFreeMdl.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x140581A70 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x140594698 (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x140597ED0 (MiFlushComplete.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1405A29F8 (MiUnlockAndFreeDvPatchImage.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E22E8 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E2410 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405E281C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x1405FD594 (SmPrepareForFatalPageError.c)
 *     DifMmUnmapLockedPagesWrapper @ 0x1406179F0 (DifMmUnmapLockedPagesWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x1406333A8 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x140633468 (EtwpFreePartitionMemory.c)
 *     MiDeleteImageCreationMdls @ 0x140705E1C (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x14084BA88 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140909214 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409094F8 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1409095FC (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14093B898 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14093C2FC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14093D590 (IopLiveDumpWriteDumpFile.c)
 *     IoFreeKsrPersistentMemory @ 0x1409409A0 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x140941654 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x140A06830 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140A06DF0 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x140A880B0 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140AA0838 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiRetardMdl @ 0x140584530 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1405B6E94 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v2; // r9d
  __int64 ByteOffset; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r11
  int v9; // r10d
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v15; // rax
  char v16; // r9
  struct _LIST_ENTRY *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]

  v2 = 0;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v2 = MiRetardMdl(MemoryDescriptorList);
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
    v7 = (unsigned __int64)BaseAddress - v2;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v21 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = v21;
    v9 = 4;
    v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = 4LL;
    do
    {
      v11 = *(&v20 + v10--);
      --v9;
      v12 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v15 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
          v16 = v12 | 0x20;
          if ( (v15 & 0x20) == 0 )
            v16 = v12;
          LOBYTE(v12) = v16;
          if ( (v15 & 0x42) != 0 )
            LOBYTE(v12) = v16 | 0x42;
        }
      }
      if ( (v12 & 1) == 0 )
        break;
      if ( (v12 & 0x80u) != 0LL )
      {
        for ( ; v9; --v9 )
          v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        break;
      }
    }
    while ( v10 != 1 );
    v13 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v17 )
      {
        LOWORD(v18) = v13 | 0x20;
        v19 = *((_QWORD *)&v17->Flink + ((v8 >> 3) & 0x1FF));
        if ( (v19 & 0x20) == 0 )
          v18 = *(_QWORD *)v8;
        LOWORD(v13) = v18;
        if ( (v19 & 0x42) != 0 )
          LOWORD(v13) = v18 | 0x42;
      }
    }
    if ( (v13 & 0x200) != 0 )
      MiZeroAndFlushPtes(v7, v6, 0);
    if ( MmProtectFreedNonPagedPool )
      LODWORD(v6) = v6 + 1;
    if ( (dword_140D051BC & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_140C534C0, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
