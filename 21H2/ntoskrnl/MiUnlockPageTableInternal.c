/*
 * XREFs of MiUnlockPageTableInternal @ 0x1402855F0
 * Callers:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x14020B3E0 (MiLockPageLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14020CDB0 (MiGetNextPageTablePte.c)
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D770 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x14020F880 (MiCheckProcessShadow.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4E0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiConvertAndFlushWsleVas @ 0x140270AEC (MiConvertAndFlushWsleVas.c)
 *     MiDeleteKernelStack @ 0x140272740 (MiDeleteKernelStack.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     MiSoftFaultMappedView @ 0x14028D5A0 (MiSoftFaultMappedView.c)
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402980D4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140299824 (MiReplaceRotateWithDemandZero.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402A0D3C (MiFlushDirtyBitsToPfn.c)
 *     MiReleaseWalkLocks @ 0x1402AA590 (MiReleaseWalkLocks.c)
 *     MiFillHyperPtes @ 0x1402ADD8C (MiFillHyperPtes.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402B7B00 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x1402BA24C (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x1402BC818 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x1402C8C5C (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x1402D0E1C (MiUnlockPageTableRange.c)
 *     MiOutPageSingleKernelStack @ 0x1402D5A60 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x1402FA54C (MiMarkPteDirty.c)
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MiIsPageTableDeletable @ 0x140305350 (MiIsPageTableDeletable.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiCommitPoolMemory @ 0x14030B22C (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x14030B3D0 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x14030B808 (MiUnlockPoolCommitWs.c)
 *     MiFillPoolCommitPageTable @ 0x14030B9E0 (MiFillPoolCommitPageTable.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14030C84C (MiUnlockNestedPageTableWritePte.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14030D66C (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 *     MiUnlockFaultPageTable @ 0x140312148 (MiUnlockFaultPageTable.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x14031EB90 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x140339E00 (MiClearPteAccessed.c)
 *     MiInitializeWorkingSetList @ 0x14035E464 (MiInitializeWorkingSetList.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14039758C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9A00 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6DC8 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCBD0 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiFaultInPagedPool @ 0x14052D114 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D398 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MiReacquireWalkLocks @ 0x1405306E0 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x140531724 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14053463C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140536050 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiCommitHotPatchTable @ 0x14053E8C0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053F19C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544248 (MiUnmapRetpolineStubs.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547254 (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405477F0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiMakeProtoPrivate @ 0x1405479E4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140549784 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AB30 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B59C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D364 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054DD3C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551F74 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x140553FBC (MiReleaseLargePteMappings.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x140285818 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  signed __int64 v4; // rdx
  bool v5; // zf
  signed __int64 v6; // rax
  __int64 v7; // rcx
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
  __int64 v18; // r9
  int v19; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v24; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 184) & 7;
  v24 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v3 )
    {
      if ( v3 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v3 == 5 )
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
      goto LABEL_22;
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
LABEL_22:
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
    goto LABEL_22;
  }
  if ( v3 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
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
  }
  else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v7 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
    if ( v7 )
    {
      v18 = (a2 >> 3) & 0x1FF;
      v19 = *(_DWORD *)(v7 + 4 * v18);
      if ( (v19 & 0x3FFFFFFF) != 0 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 4 * v18));
      }
      else
      {
        if ( v19 >= 0 )
          KeBugCheckEx(0x10u, v7 + 4 * v18, 0x100uLL, 0LL, 0LL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 4 * v18));
      }
      return;
    }
  }
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
      v21 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v22 = v4 | 0x20;
      if ( (v21 & 0x20) == 0 )
        v22 = *(_QWORD *)a2;
      v4 = v22;
      if ( (v21 & 0x42) != 0 )
        v4 = v22 | 0x42;
    }
  }
  do
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v4 & 0xCFFFFFFFFFFFFFFFuLL, v4);
    v5 = v4 == v6;
    v4 = v6;
  }
  while ( !v5 );
}
