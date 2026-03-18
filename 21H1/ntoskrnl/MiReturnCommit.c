/*
 * XREFs of MiReturnCommit @ 0x14027D3E0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MiFreePageFileHashPfns @ 0x1402402EC (MiFreePageFileHashPfns.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MmFreePoolMemory @ 0x1402AC0AC (MmFreePoolMemory.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiReturnExcessPoolCommit @ 0x1402B1AB4 (MiReturnExcessPoolCommit.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     MiDeleteSegmentPages @ 0x1402B96A0 (MiDeleteSegmentPages.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MmReleaseResourceCharge @ 0x1402C3D30 (MmReleaseResourceCharge.c)
 *     MiReturnPoolCharges @ 0x1402D4E10 (MiReturnPoolCharges.c)
 *     MiUnlockImageSection @ 0x1402EB5D0 (MiUnlockImageSection.c)
 *     MiReleaseNonPagedResources @ 0x1402FA2F8 (MiReleaseNonPagedResources.c)
 *     MiDeleteSystemPageTableTail @ 0x140307820 (MiDeleteSystemPageTableTail.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiCleanupPageTablePages @ 0x140326464 (MiCleanupPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x140326628 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140326FF0 (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1403279C4 (MiObtainMdlCharges.c)
 *     MiMakePartitionActive @ 0x140328410 (MiMakePartitionActive.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     MiGetPageTablePages @ 0x1403290D0 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1403291EC (MiObtainSystemCharges.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiReleaseWriteInProgressCharges @ 0x140354084 (MiReleaseWriteInProgressCharges.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiDeleteSessionPdes @ 0x140389064 (MiDeleteSessionPdes.c)
 *     MiGetFileHashPage @ 0x140389630 (MiGetFileHashPage.c)
 *     MiSessionUpdateImageCharges @ 0x14039B6E0 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14039F454 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403AB508 (MiDeleteBootRange.c)
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 *     MiReturnSplitPageCharges @ 0x1403CA9A8 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140533E80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x14053CFB0 (MiAttemptPageFileReductionApc.c)
 *     MiMoveBadPageCrossPartition @ 0x1405494CC (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     MiRebuildLargePage @ 0x14054CBE8 (MiRebuildLargePage.c)
 *     MiGetSubsectionCharges @ 0x14054F3D8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x140555AA8 (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055744C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055765C (MiReturnCrossPartitionCombineCharges.c)
 *     MiCreateLargePfnList @ 0x14055840C (MiCreateLargePfnList.c)
 *     MiInsertPartitionPages @ 0x14055CA50 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiRemoveVadCharges @ 0x14062DDB0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14062F1B0 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x140640FF0 (MiChargeSegmentCommit.c)
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14075E7D0 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     MiMarkBootGuardPage @ 0x140781E08 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C40F4 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x1408CBC4C (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1408D67A0 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSyncCommitSignals @ 0x1403BB934 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x14054AC24 (MiRestockOverCommit.c)
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
