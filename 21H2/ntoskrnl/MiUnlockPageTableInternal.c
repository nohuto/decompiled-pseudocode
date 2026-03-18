/*
 * XREFs of MiUnlockPageTableInternal @ 0x14020D8D0
 * Callers:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMakeProtoPrivate @ 0x1402011DC (MiMakeProtoPrivate.c)
 *     MiFaultInPagedPool @ 0x1402019FC (MiFaultInPagedPool.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402292C0 (MiUnlockNestedPageTableWritePte.c)
 *     MiReleaseWalkLocks @ 0x1402341A4 (MiReleaseWalkLocks.c)
 *     MiFillHyperPtes @ 0x140236274 (MiFillHyperPtes.c)
 *     MiMarkPteDirty @ 0x14023A12C (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14023CB68 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14023FBE4 (MiEncodeProtoFill.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiDirtySystemCachePte @ 0x140241138 (MiDirtySystemCachePte.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402426F4 (MiReturnSystemCacheRegionsToKva.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiUnlockFaultPageTable @ 0x14027A9D0 (MiUnlockFaultPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiReacquireWalkLocks @ 0x14027D2D8 (MiReacquireWalkLocks.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiConvertAndFlushWsleVas @ 0x14027FD04 (MiConvertAndFlushWsleVas.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiInitializeWorkingSetList @ 0x1402A0624 (MiInitializeWorkingSetList.c)
 *     MiCheckProcessShadow @ 0x1402B2E40 (MiCheckProcessShadow.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiFillPoolCommitPageTable @ 0x1402CFF00 (MiFillPoolCommitPageTable.c)
 *     MiIsPageTableDeletable @ 0x1402D01A8 (MiIsPageTableDeletable.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockComplete @ 0x14031A4F0 (MiProbeAndLockComplete.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiLockPageLeafPageTable @ 0x14031BF80 (MiLockPageLeafPageTable.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiResolvePageTablePage @ 0x14031D740 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiCaptureDeleteHierarchy @ 0x14032CB70 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x140332A80 (MiClearPteAccessed.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiCommitPoolMemory @ 0x1403525F0 (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x1403528A4 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x140352CB4 (MiUnlockPoolCommitWs.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MiLockPageTableRange @ 0x140386DC4 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x140395864 (MiUnlockPageTableRange.c)
 *     MiUnlockPageTable @ 0x1403C2CA0 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x1403C8D10 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403DC188 (MiGetWsAndMakePageTablesNx.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14058C874 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140593E88 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1405941C0 (MiVadRangeIsIoSpace.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x1405A3418 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiQueryVaPhysicalContiguity @ 0x1405A645C (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405A6840 (MiWorkingSetInfoCheckPageTable.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405A8748 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x1405AC670 (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 *     MiComputeIdealLargePage @ 0x1405C1218 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x14020DAE8 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v3; // r8
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rcx
  char v7; // r8
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  __int64 Next; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *SchedulerAssist; // rdx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v13; // eax
  int v14; // edx
  signed __int32 v15; // ett
  struct _KPRCB *CurrentPrcb; // rbx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  volatile LONG *v20; // rdx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v22; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v24; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v24 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v7 = v2 & 7;
    if ( v7 )
    {
      if ( v7 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v7 == 5 )
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        else
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(SelfmapLockHandle);
    Next = (__int64)SelfmapLockHandle->LockQueue.Next;
    if ( !SelfmapLockHandle->LockQueue.Next )
    {
      if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                         0LL,
                                                         (signed __int64)SelfmapLockHandle) )
      {
LABEL_24:
        v10 = KeGetCurrentPrcb();
        SchedulerAssist = v10->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v10->NestingLevel <= 1u )
          {
            v17 = SchedulerAssist[6] - 1;
            SchedulerAssist[6] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(v10);
          }
        }
        return;
      }
      Next = KxWaitForLockChainValid(SelfmapLockHandle);
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_24;
  }
  v3 = v2 & 7;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  if ( v3 )
  {
    if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v24);
      v13 = *PageTableLockBuffer;
      v14 = ~(3 << v24);
      do
      {
        v15 = v13;
        v13 = _InterlockedCompareExchange(PageTableLockBuffer, v13 & v14, v13);
      }
      while ( v15 != v13 );
      return;
    }
    goto LABEL_3;
  }
  if ( a2 > 0xFFFFF6FB7DBEDFFFuLL
    || (v6 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592)) == 0 )
  {
LABEL_3:
    v4 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v22 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        if ( (v22 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v22 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    do
    {
      if ( (MiFlags & 0x4000000) != 0 )
        _mm_lfence();
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v4 & 0xCFFFFFFFFFFFFFFFuLL, v4);
    }
    while ( v5 != v4 );
    return;
  }
  v18 = (a2 >> 3) & 0x1FF;
  v19 = *(_DWORD *)(v6 + 4 * v18);
  v20 = (volatile LONG *)(v6 + 4 * v18);
  if ( (v19 & 0x3FFFFFFF) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v20);
  }
  else
  {
    if ( v19 >= 0 )
      KeBugCheckEx(0x10u, (ULONG_PTR)v20, 0x100uLL, 0LL, 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  }
}
