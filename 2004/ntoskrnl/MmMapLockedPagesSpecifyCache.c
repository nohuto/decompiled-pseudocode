/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14021BA60
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 *     SmMapPage @ 0x1402CD7F4 (SmMapPage.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402CDD78 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1402D06B8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     EtwpAllocateTraceBuffer @ 0x1402FF6F0 (EtwpAllocateTraceBuffer.c)
 *     SmFpAllocate @ 0x140304118 (SmFpAllocate.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     KeFlushIoBuffers @ 0x140338680 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x1403399D0 (FsRtlCancelNotify.c)
 *     MiWritePageFileHash @ 0x1403876B4 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039CC28 (HalpDmaCheckMdlAccessibility.c)
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CA624 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C0810 (HalAllocateCommonBufferVector.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C16B8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFlushBuffer @ 0x1404C266C (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffers @ 0x1404C3304 (HalpDmaSyncMapBuffers.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C63C0 (HalpAllocateCommonBufferThin.c)
 *     CcLockSystemCacheBuffer @ 0x1404E5388 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14051F284 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x14052C790 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x14053BC60 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x140541768 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x14055827C (MiValidatePagefilePageHash.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14057E414 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14057E53C (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x14057E98C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14059A8D8 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x14059C0D4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14059C2C8 (MdlInvariantPreProcessing1.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AB0A8 (EtwpAllocatePartitionMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405CE5D4 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405EA910 (MmCopyVirtualMemory.c)
 *     MiCreateMdl @ 0x14060C320 (MiCreateMdl.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406D8B78 (WbMakeUserExecutablePagesKernelWritable.c)
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406DFC20 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406E0F00 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x1406F48D8 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140861C78 (HalpDmaAllocateScatterMemory.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140894690 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemory @ 0x140898F00 (IoReserveKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x140899858 (PipGetPersistentMemory.c)
 *     MiApplyImageHotPatch @ 0x1408C5F5C (MiApplyImageHotPatch.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CDCA0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x140957790 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 *     PopAllocatePages @ 0x1409938C4 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5B4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1409CB92C (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1409CC084 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3BD0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1409E44C8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1409EE088 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140A45AA0 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x140336F84 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x140532070 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x140559940 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
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
    *(_QWORD *)&CacheType = ((qword_140C4DEA8 << 9) - qword_140C4ED78) << 12;
    RequestedAddress = (PVOID)((unsigned int)(v11 == 16) + 1);
    v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / (unsigned int)RequestedAddress;
    if ( *(_QWORD *)&CacheType < v13
      && (v12 >= qword_140C4ED98 || v10 >= qword_140C4ED98 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_140C4ED68;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes((__int64)&qword_140C4ED40, v14, *(__int64 *)&CacheType, (unsigned __int64)RequestedAddress);
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
  MiReleasePtes(&qword_140C4ED40, v16, v14);
  return 0LL;
}
