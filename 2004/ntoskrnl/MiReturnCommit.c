/*
 * XREFs of MiReturnCommit @ 0x140224390
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MmFreePoolMemory @ 0x14025307C (MmFreePoolMemory.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     MiReturnExcessPoolCommit @ 0x140258A84 (MiReturnExcessPoolCommit.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x14025E10C (MiUnlockPageTableCharges.c)
 *     MiDeleteSegmentPages @ 0x140260670 (MiDeleteSegmentPages.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiReturnPoolCharges @ 0x14026B470 (MiReturnPoolCharges.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x1402B9020 (MiDeleteKernelStack.c)
 *     MiCleanupPageTablePages @ 0x1402E1364 (MiCleanupPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x1402E1528 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402E1DB8 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402E1ED8 (MiObtainMdlCharges.c)
 *     MiMakePartitionActive @ 0x1402E20B8 (MiMakePartitionActive.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiGetPageTablePages @ 0x1402E2D70 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1402E2E8C (MiObtainSystemCharges.c)
 *     MiFreePageFileHashPfns @ 0x1402F35EC (MiFreePageFileHashPfns.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F80A4 (MiReleaseWriteInProgressCharges.c)
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     MmReleaseResourceCharge @ 0x140305FE0 (MmReleaseResourceCharge.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiUnlockImageSection @ 0x140324F00 (MiUnlockImageSection.c)
 *     MiReleaseNonPagedResources @ 0x140337328 (MiReleaseNonPagedResources.c)
 *     MiDeleteSystemPageTableTail @ 0x140345620 (MiDeleteSystemPageTableTail.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiDeleteSessionPdes @ 0x14038A0D8 (MiDeleteSessionPdes.c)
 *     MiGetFileHashPage @ 0x14038A6A0 (MiGetFileHashPage.c)
 *     MiSessionUpdateImageCharges @ 0x14039BE70 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     MiPfnRangeIsZero @ 0x1403B6748 (MiPfnRangeIsZero.c)
 *     MiReturnSplitPageCharges @ 0x1403CB788 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x140527084 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 *     MiUnlinkBadPages @ 0x140529C28 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1405344D0 (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x14053D600 (MiAttemptPageFileReductionApc.c)
 *     MiMoveBadPageCrossPartition @ 0x140549B1C (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
 *     MiRebuildLargePage @ 0x14054D238 (MiRebuildLargePage.c)
 *     MiGetSubsectionCharges @ 0x14054FA28 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1405549E8 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1405560F8 (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140557A9C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140557CAC (MiReturnCrossPartitionCombineCharges.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiInsertPartitionPages @ 0x14055D0A0 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140760BA0 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x140765340 (MiDereferenceSessionFinal.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     MiMarkBootGuardPage @ 0x14078778C (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C5444 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x1408CCF9C (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1408D7AF0 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403BCC54 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x14054B274 (MiRestockOverCommit.c)
 */

void __fastcall MiReturnCommit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KPRCB *v4; // rdx
  __int64 CachedCommit; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v2 = a2;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*(_QWORD *)(a1 + 6264) )
      goto LABEL_27;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6248), &LockHandle);
    v2 = MiRestockOverCommit(a1, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
LABEL_27:
      if ( (ULONG_PTR *)a1 == &MiSystemPartition
        && (v4 = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&v4->CachedCommit),
            CachedCommit = v4->CachedCommit,
            (unsigned __int64)(v2 + CachedCommit) <= 0x100) )
      {
        while ( 1 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&v4->CachedCommit,
                 CachedCommit + v2,
                 CachedCommit);
          if ( v6 == CachedCommit )
            break;
          CachedCommit = v6;
          if ( (unsigned __int64)(v6 + v2) > 0x100 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7464), -v2);
        v8 = *(_QWORD *)(a1 + 6240);
        if ( v7 >= v8 && v7 - v2 < v8 || (v9 = *(_QWORD *)(a1 + 6232), v7 >= v9) && v7 - v2 < v9 )
          MiSyncCommitSignals(a1, 0LL);
      }
    }
  }
}
