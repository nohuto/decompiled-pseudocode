/*
 * XREFs of MiUnlockPageTableInternal @ 0x140202790
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14021E2BC (MiFlushDirtyBitsToPfn.c)
 *     MiReleaseWalkLocks @ 0x1402286D0 (MiReleaseWalkLocks.c)
 *     MiFillHyperPtes @ 0x14022C0EC (MiFillHyperPtes.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14023845C (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x14023ADA8 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x1402474BC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14024F2AC (MiUnlockPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiConvertAndFlushWsleVas @ 0x14025EA8C (MiConvertAndFlushWsleVas.c)
 *     MiDeleteKernelStack @ 0x1402606E0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiInitializeWorkingSetList @ 0x1402A3394 (MiInitializeWorkingSetList.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x1402AFCE0 (MiLockPageLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x14030529C (MiMarkPteDirty.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiIsPageTableDeletable @ 0x1403100A0 (MiIsPageTableDeletable.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x140316120 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x140316558 (MiUnlockPoolCommitWs.c)
 *     MiFillPoolCommitPageTable @ 0x140316730 (MiFillPoolCommitPageTable.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14031759C (MiUnlockNestedPageTableWritePte.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1403183BC (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MiUnlockFaultPageTable @ 0x14031CE98 (MiUnlockFaultPageTable.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9B70 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCD40 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B34C (MiCheckCommitReleaseFromVad.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D5D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiReacquireWalkLocks @ 0x140530920 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14053487C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiCommitHotPatchTable @ 0x14053EB00 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053F3DC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547494 (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140547A30 (MiWorkingSetInfoCheckPageTable.c)
 *     MiMakeProtoPrivate @ 0x140547C24 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405499C4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B7DC (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054DF7C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4EC44 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x1402029B8 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
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
