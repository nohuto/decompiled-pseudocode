/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x1402864D0
 * Callers:
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402553C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140256910 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x1402597E0 (SmMapPage.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     KeFlushIoBuffers @ 0x14030AE60 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x14030C1F0 (FsRtlCancelNotify.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     SmFpAllocate @ 0x140358D98 (SmFpAllocate.c)
 *     EtwpAllocateTraceBuffer @ 0x140360E40 (EtwpAllocateTraceBuffer.c)
 *     MiWritePageFileHash @ 0x140389874 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x14039BCB4 (BgpFwAllocateMemory.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FD78 (HalpDmaCheckMdlAccessibility.c)
 *     HalInitializeBios @ 0x1403C4350 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD264 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C4BD8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBuffer @ 0x1404C5B8C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C6824 (HalpDmaSyncMapBuffers.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x140522C54 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140530160 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x14053F630 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x140545138 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x14055BC4C (MiValidatePagefilePageHash.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140581E44 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x140581F6C (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405823BC (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059E378 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x14059FB74 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14059FD68 (MdlInvariantPreProcessing1.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AEC08 (EtwpAllocatePartitionMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D4A78 (WbMakeUserDataPagesKernelWritable.c)
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     MmCopyVirtualMemory @ 0x140679AB0 (MmCopyVirtualMemory.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406B7570 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406B8230 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406B8850 (FsRtlNotifyCompleteIrp.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406E1A68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MiCreateMdl @ 0x140708B28 (MiCreateMdl.c)
 *     AlpcpInitializeCompletionList @ 0x14070FBF4 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x14079EDEC (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140867698 (HalpDmaAllocateScatterMemory.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14089A340 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemory @ 0x14089EA30 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089F388 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D3AE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x14095D550 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 *     PopAllocatePages @ 0x140999A24 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x1409D05D4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1409D194C (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1409D20A4 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1409EA4E8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1409F4298 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140A4BD40 (KiComputeNumaCosts.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x140260F24 (MiMappingHasIoReferences.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x140535A40 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x14055D310 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  char *v8; // rcx
  signed int v9; // esi
  unsigned __int64 v10; // rbp
  ULONG v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // r15
  unsigned int v17; // ecx
  void *locked; // rdi
  unsigned int v19; // r14d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  CSHORT MdlFlags; // cx
  char v24; // si
  CSHORT v25; // cx
  unsigned int v26; // esi
  unsigned int v28; // eax
  int v29; // [rsp+68h] [rbp+10h] BYREF

  v29 = 0;
  v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  if ( AccessMode )
  {
    locked = (void *)MiMapLockedPagesInUserSpace(
                       (_DWORD)MemoryDescriptorList,
                       (_DWORD)v8,
                       CacheType,
                       (_DWORD)RequestedAddress,
                       Priority);
    if ( !locked )
      return 0LL;
    return locked;
  }
  v9 = Priority;
  v10 = (((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (Priority & 0x20) == 0 )
  {
    v11 = Priority & 0x3FFFFFFF;
    v12 = 512LL;
    if ( (Priority & 0x3FFFFFFF) != 0x10 )
      v12 = 2048LL;
    v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v11 == 16) + 1);
    if ( ((qword_140C4DF28 << 9) - qword_140C4EDF8) << 12 < v13
      && (v12 >= qword_140C4EE18 || v10 >= qword_140C4EE18 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140C4EDE8;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes((__int64)&qword_140C4EDC0, v14);
  v16 = v15;
  if ( !v15 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      return 0LL;
    goto LABEL_39;
  }
  v17 = ((v9 >> 31) & 0xFFFFFFFD) + 4;
  locked = (void *)(MemoryDescriptorList->ByteOffset + ((__int64)(v15 << 25) >> 16));
  if ( (MiFlags & 0x10000) != 0 )
    v9 = 0x40000000;
  v19 = v17 | 2;
  if ( (v9 & 0x40000000) != 0 )
    v19 = v17;
  if ( CacheType )
  {
    if ( CacheType == MmWriteCombined )
      v19 |= 0x18u;
  }
  else
  {
    v19 |= 8u;
  }
  v20 = MiFillSystemPtes(v15, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v29);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( v20 >= 0 )
  {
    v24 = v29;
    v25 = MdlFlags | 1;
    MemoryDescriptorList->MappedSystemVa = locked;
    MemoryDescriptorList->MdlFlags = v25;
    v26 = v24 & 1;
    if ( v26 )
    {
      MiMappingHasIoReferences((unsigned __int64)locked);
      MemoryDescriptorList->MdlFlags |= 0x800u;
      v25 = MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140CFB17C & 1) != 0 )
    {
      if ( MmProtectFreedNonPagedPool == 1 )
        v26 |= 2u;
      v28 = MiProtectionToCacheAttribute(v19, v21, v22);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v26, v28);
      v25 = MemoryDescriptorList->MdlFlags;
    }
    if ( (v25 & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = v25 | 0x20;
    return locked;
  }
  if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
LABEL_39:
    MiIssueNoPtesBugcheck((unsigned int)v10);
  MiReleasePtes(&qword_140C4EDC0, v16, v14);
  return 0LL;
}
