/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x140308CD0
 * Callers:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     EtwpAllocateTraceBuffer @ 0x140261A20 (EtwpAllocateTraceBuffer.c)
 *     CcCompleteAsyncRead @ 0x14028F324 (CcCompleteAsyncRead.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14037AC18 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14037BD80 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14037DA00 (SmFpAllocate.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     SmMapPage @ 0x1403818D0 (SmMapPage.c)
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403DCA14 (PpmHeteroInitializeHgsSupport.c)
 *     HalpDmaAcquireBufferMappings @ 0x140456CC6 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     MiValidatePagefilePageHash @ 0x14045D5EA (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14045D8D2 (MiWritePageFileHash.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140503D4C (HalpDmaCheckMdlAccessibility.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140511BD0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 *     HalCreateCommonBufferFromMdl @ 0x140514560 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405158A0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x1405160A0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405164D0 (HalpAllocateCommonBufferDmarThin.c)
 *     CcLockSystemCacheBuffer @ 0x14053A460 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14057B748 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140585870 (MmMapLockedPages.c)
 *     MiTransferMemoryPagefileData @ 0x14059A568 (MiTransferMemoryPagefileData.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiGetWorkingSetInfo @ 0x1405A605C (MiGetWorkingSetInfo.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E22E8 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E2410 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405E281C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x1405FD594 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405FF19C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405FF390 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x140617430 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x1406333A8 (EtwpAllocatePartitionMemory.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406ABC90 (FsRtlNotifyCompleteIrp.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E0358 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MiCreateMdl @ 0x1407084B0 (MiCreateMdl.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x1407F5914 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x14090943C (HalpDmaAllocateScatterMemory.c)
 *     IopAllocateAndLockMdl @ 0x140933A9C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14093B898 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14093BBD8 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x140941654 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x140A06B80 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 *     PopAllocatePages @ 0x140A4FC08 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140A872C8 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140A88624 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140A88D98 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AA00D0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140AA0838 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140AAB320 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140B31500 (KiComputeNumaCosts.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x1402155C8 (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     MiIssueNoPtesBugcheck @ 0x140592398 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1405B6C18 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  signed int v6; // ebp
  __int64 ByteOffset; // rcx
  char *v10; // rcx
  unsigned __int64 v11; // rsi
  ULONG v12; // ecx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  _QWORD *v17; // r14
  unsigned int v18; // r12d
  void *locked; // rdi
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  CSHORT v23; // cx
  unsigned int v24; // esi
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v6 = Priority;
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v27 = 0;
  v10 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
  if ( AccessMode )
  {
    locked = (void *)MiMapLockedPagesInUserSpace(
                       (_DWORD)MemoryDescriptorList,
                       (_DWORD)v10,
                       CacheType,
                       (_DWORD)RequestedAddress,
                       Priority);
    if ( !locked )
      return 0LL;
    return locked;
  }
  v11 = (((unsigned __int16)v10 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (Priority & 0x20) == 0 )
  {
    v12 = Priority & 0x3FFFFFFF;
    v13 = 512LL;
    if ( (Priority & 0x3FFFFFFF) != 0x10 )
      v13 = 2048LL;
    v14 = v12 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v12 == 16) + 1);
    if ( ((qword_140C51930 << 9) - qword_140C534F0) << 12 < v14
      && (v13 >= qword_140C53510 || v11 >= qword_140C53510 - v13)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140C534E0;
      return 0LL;
    }
  }
  v15 = v11;
  if ( MmProtectFreedNonPagedPool )
    v15 = v11 + 1;
  v16 = MiReservePtes(&qword_140C534C0, v15);
  v17 = (_QWORD *)v16;
  if ( !v16 )
  {
    if ( _bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) || !BugCheckOnFailure )
      return 0LL;
    goto LABEL_38;
  }
  v18 = ((v6 >> 31) & 0xFFFFFFFD) + 4;
  locked = (void *)(MemoryDescriptorList->ByteOffset + (v16 << 25 >> 16));
  if ( (MiFlags & 0x8000) == 0 && (v6 & 0x40000000) == 0 )
    v18 |= 2u;
  if ( CacheType )
  {
    if ( CacheType == MmWriteCombined )
      v18 |= 0x18u;
  }
  else
  {
    v18 |= 8u;
  }
  v20 = MiFillSystemPtes(v16, v11, (int)MemoryDescriptorList + 48, v18, 0, (__int64)&v27);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( v20 >= 0 )
  {
    v22 = v27;
    v23 = MdlFlags | 1;
    MemoryDescriptorList->MappedSystemVa = locked;
    MemoryDescriptorList->MdlFlags = v23;
    v24 = v22 & 1;
    if ( v24 )
    {
      MiMappingHasIoReferences((unsigned __int64)locked);
      MemoryDescriptorList->MdlFlags |= 0x800u;
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140D051BC & 1) != 0 )
    {
      if ( MmProtectFreedNonPagedPool )
        v24 |= 2u;
      v26 = MiProtectionToCacheAttribute(v18);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v24, v26);
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (v23 & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = v23 | 0x20;
    return locked;
  }
  if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
LABEL_38:
    MiIssueNoPtesBugcheck((unsigned int)v11);
  MiReleasePtes((__int64)&qword_140C534C0, v17, v15);
  return 0LL;
}
