/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x1402CB5C0
 * Callers:
 *     KeFlushIoBuffers @ 0x140225FF0 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x140228890 (FsRtlCancelNotify.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14028A410 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x14028D2E0 (SmMapPage.c)
 *     SmFpAllocate @ 0x1402920C8 (SmFpAllocate.c)
 *     EtwpAllocateTraceBuffer @ 0x14029E818 (EtwpAllocateTraceBuffer.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     CcCompleteAsyncRead @ 0x140302390 (CcCompleteAsyncRead.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiWritePageFileHash @ 0x14038A114 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FB08 (HalpDmaCheckMdlAccessibility.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CDDB4 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C67E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C8434 (HalpDmaSyncMapBuffers.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB530 (HalpAllocateCommonBufferThin.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA6E8 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x140524974 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140531EA0 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x140541370 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x140546E78 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140583A84 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x140583BAC (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x140583FFC (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059FFD8 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A17D4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405A19C8 (MdlInvariantPreProcessing1.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0838 (EtwpAllocatePartitionMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     AlpcpInitializeCompletionList @ 0x1405D96A0 (AlpcpInitializeCompletionList.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1405E5B68 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1405F0650 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1405F0C54 (FsRtlNotifyCompleteIrp.c)
 *     MiCreateMdl @ 0x1406AAD54 (MiCreateMdl.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A90AC (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140865408 (HalpDmaAllocateScatterMemory.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897A70 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C160 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x14089CAB8 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C96BC (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D1400 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 *     PopAllocatePages @ 0x140997B74 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x1409CE5C4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1409CF93C (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1409D0094 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E7BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E84E8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1409F2298 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140A4E2E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x140217B54 (MiMappingHasIoReferences.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiIssueNoPtesBugcheck @ 0x140537780 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x14055F020 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  MEMORY_CACHING_TYPE v7; // r12d
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
  CSHORT MdlFlags; // cx
  char v22; // si
  CSHORT v23; // cx
  unsigned int v24; // esi
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v27 = 0;
  v7 = CacheType;
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
    *(_QWORD *)&CacheType = ((qword_140C4E0E8 << 9) - qword_140C4EFB8) << 12;
    RequestedAddress = (PVOID)((unsigned int)(v11 == 16) + 1);
    v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / (unsigned int)RequestedAddress;
    if ( *(_QWORD *)&CacheType < v13
      && (v12 >= qword_140C4EFD8 || v10 >= qword_140C4EFD8 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140C4EFA8;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes((__int64)&qword_140C4EF80, v14, *(__int64 *)&CacheType, (unsigned __int64)RequestedAddress);
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
  if ( v7 )
  {
    if ( v7 == MmWriteCombined )
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
      MiMappingHasIoReferences((unsigned __int64)locked);
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
  MiReleasePtes(&qword_140C4EF80, v16, v14);
  return 0LL;
}
