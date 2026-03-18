/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x140274AB0
 * Callers:
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     SmMapPage @ 0x14023A9C4 (SmMapPage.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14023AF48 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14023D888 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     EtwpAllocateTraceBuffer @ 0x1402DEEBC (EtwpAllocateTraceBuffer.c)
 *     KeFlushIoBuffers @ 0x1402FB650 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x1402FC690 (FsRtlCancelNotify.c)
 *     SmFpAllocate @ 0x140309C68 (SmFpAllocate.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiWritePageFileHash @ 0x140386744 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x140399064 (BgpFwAllocateMemory.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039C498 (HalpDmaCheckMdlAccessibility.c)
 *     HalInitializeBios @ 0x1403C0D20 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403C9844 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C03A0 (HalAllocateCommonBufferVector.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C1248 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBuffer @ 0x1404C21FC (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C2E94 (HalpDmaSyncMapBuffers.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C5F10 (HalpAllocateCommonBufferThin.c)
 *     CcLockSystemCacheBuffer @ 0x1404E4DD8 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14051EC34 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x14052C140 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x14053B610 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x140541118 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x140557C2C (MiValidatePagefilePageHash.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14057DDD4 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14057DEFC (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x14057E34C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059A1E8 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x14059B9E4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14059BBD8 (MdlInvariantPreProcessing1.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AA9B8 (EtwpAllocatePartitionMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CD204 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x14061FF30 (MmCopyVirtualMemory.c)
 *     MiCreateMdl @ 0x140641470 (MiCreateMdl.c)
 *     AlpcpInitializeCompletionList @ 0x140676454 (AlpcpInitializeCompletionList.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406BF6A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C0360 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C0980 (FsRtlNotifyCompleteIrp.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406EB818 (WbMakeUserExecutablePagesKernelWritable.c)
 *     HalpDmaAllocateScatterMemory @ 0x14086097C (HalpDmaAllocateScatterMemory.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140893370 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemory @ 0x140897BE0 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x140898538 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 *     PopAllocatePages @ 0x140992284 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5A4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1409CB91C (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1409CC074 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3B70 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E4468 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1409EE298 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140A4027C (KiComputeNumaCosts.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MiMappingHasIoReferences @ 0x1402F9F54 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x140531A20 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1405592F0 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
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
  _QWORD *v16; // r15
  unsigned int v17; // ecx
  void *locked; // rdi
  unsigned int v19; // r14d
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  CSHORT v23; // cx
  unsigned int v24; // esi
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v27 = 0;
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
    if ( ((qword_140C4DFE8 << 9) - qword_140C4EEB8) << 12 < v13
      && (v12 >= qword_140C4EED8 || v10 >= qword_140C4EED8 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140C4EEA8;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes((__int64)&qword_140C4EE80, v14);
  v16 = (_QWORD *)v15;
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
  v20 = MiFillSystemPtes(v15, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v27);
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
      MiMappingHasIoReferences(locked);
      MemoryDescriptorList->MdlFlags |= 0x800u;
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140CFB17C & 1) != 0 )
    {
      if ( MmProtectFreedNonPagedPool == 1 )
        v24 |= 2u;
      v26 = MiProtectionToCacheAttribute(v19);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v24, v26);
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (v23 & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = v23 | 0x20;
    return locked;
  }
  if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
LABEL_39:
    MiIssueNoPtesBugcheck((unsigned int)v10);
  MiReleasePtes((__int64)&qword_140C4EE80, v16, v14);
  return 0LL;
}
