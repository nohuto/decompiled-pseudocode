/*
 * XREFs of MiUnlockPageTableInternal @ 0x1402DB860
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14020C280 (MiGetNextPageTablePte.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021AAC0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiFillPoolCommitPageTable @ 0x140223CC0 (MiFillPoolCommitPageTable.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiUnlockFaultPageTable @ 0x14022B558 (MiUnlockFaultPageTable.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiIsPageTableDeletable @ 0x14029EFC0 (MiIsPageTableDeletable.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x1402A7490 (MiLockPageLeafPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiFillHyperPtes @ 0x1402AC9AC (MiFillHyperPtes.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402AEF74 (MiIsCfgBitMapPageShared.c)
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x1402B1880 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402B1A28 (MiUnlockPoolCommitWs.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1402BD9E0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x1402BDA7C (MiDirtySystemCachePte.c)
 *     MiEncodeProtoFill @ 0x1402BE9B4 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MiConvertAndFlushWsleVas @ 0x140305480 (MiConvertAndFlushWsleVas.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14032085C (MiUnlockPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B5730 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C87B0 (MiGetWsAndMakePageTablesNx.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527878 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiReacquireWalkLocks @ 0x14052ABC0 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14052EB1C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140530530 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiCommitHotPatchTable @ 0x140538DA0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140541CD0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiMakeProtoPrivate @ 0x140541EC4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054821C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiGetPageTableLockBuffer @ 0x1402DBA88 (MiGetPageTableLockBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  signed __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  __int64 v8; // rcx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  __int64 Next; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *SchedulerAssist; // rdx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v14; // eax
  int v15; // edx
  signed __int32 v16; // ett
  struct _KPRCB *CurrentPrcb; // rbx
  int v18; // eax
  __int64 v19; // r9
  int v20; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  int v25; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 184);
  LOBYTE(v4) = v4 & 7;
  v25 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (_BYTE)v4 )
    {
      if ( (_BYTE)v4 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_BYTE)v4 == 5 )
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
        v11 = KeGetCurrentPrcb();
        SchedulerAssist = v11->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v18 = SchedulerAssist[6] - 1;
            SchedulerAssist[6] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        return;
      }
      Next = KxWaitForLockChainValid((__int64 *)SelfmapLockHandle, v4, a3, 0xFFFFF6FB7DBEDF68uLL);
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_22;
  }
  if ( (_BYTE)v4 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v25);
      v14 = *PageTableLockBuffer;
      v15 = ~(3 << v25);
      do
      {
        v16 = v14;
        v14 = _InterlockedCompareExchange(PageTableLockBuffer, v14 & v15, v14);
      }
      while ( v16 != v14 );
      return;
    }
  }
  else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v8 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
    if ( v8 )
    {
      v19 = (a2 >> 3) & 0x1FF;
      v20 = *(_DWORD *)(v8 + 4 * v19);
      if ( (v20 & 0x3FFFFFFF) != 0 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v19));
      }
      else
      {
        if ( v20 >= 0 )
          KeBugCheckEx(0x10u, v8 + 4 * v19, 0x100uLL, 0LL, 0LL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v19));
      }
      return;
    }
  }
  v5 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v22 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v23 = v5 | 0x20;
      if ( (v22 & 0x20) == 0 )
        v23 = *(_QWORD *)a2;
      v5 = v23;
      if ( (v22 & 0x42) != 0 )
        v5 = v23 | 0x42;
    }
  }
  do
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v5 & 0xCFFFFFFFFFFFFFFFuLL, v5);
    v6 = v5 == v7;
    v5 = v7;
  }
  while ( !v6 );
}
