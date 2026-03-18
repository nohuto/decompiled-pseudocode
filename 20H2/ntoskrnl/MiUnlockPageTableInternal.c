/*
 * XREFs of MiUnlockPageTableInternal @ 0x14035B910
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiFillHyperPtes @ 0x140233F64 (MiFillHyperPtes.c)
 *     MiComputePageCommitment @ 0x1402340F0 (MiComputePageCommitment.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140235BB4 (MiIsCfgBitMapPageShared.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiIsPageTableDeletable @ 0x140236000 (MiIsPageTableDeletable.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiMarkPteDirty @ 0x14024F530 (MiMarkPteDirty.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiEncodeProtoFill @ 0x140250F1C (MiEncodeProtoFill.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiLockPageLeafPageTable @ 0x14026C700 (MiLockPageLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiUnlockFaultPageTable @ 0x140299728 (MiUnlockFaultPageTable.c)
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x1402BD2E0 (MiClearPteAccessed.c)
 *     MiFillPoolCommitPageTable @ 0x1402CA5C0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x1402CAD1C (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x1402CAEC0 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402CB2F8 (MiUnlockPoolCommitWs.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402CC62C (MiUnlockNestedPageTableWritePte.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1402D3A8C (MiConvertAndFlushWsleVas.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x140301340 (MiClearNonPagedPtes.c)
 *     MiReleaseWalkLocks @ 0x14030BCFC (MiReleaseWalkLocks.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140316FF8 (MiUnlockProbePacketWorkingSet.c)
 *     MiDirtySystemCachePte @ 0x14031A254 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x140322668 (MiFlushDirtyBitsToPfn.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x140327A8C (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14032EDAC (MiUnlockPageTableRange.c)
 *     MiInitializeWorkingSetList @ 0x140338B74 (MiInitializeWorkingSetList.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9000 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CC200 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F2DE0 (MmUpdateUserShadowStackValue.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052960C (MiCheckCommitReleaseFromVad.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiReacquireWalkLocks @ 0x14052EBE0 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x140532B3C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140534550 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiCommitHotPatchTable @ 0x14053CDC0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiQueryVaPhysicalContiguity @ 0x140545754 (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140545CF0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiMakeProtoPrivate @ 0x140545EE4 (MiMakeProtoPrivate.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140549A9C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054C23C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x14035BB38 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
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
