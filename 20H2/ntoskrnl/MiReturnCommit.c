/*
 * XREFs of MiReturnCommit @ 0x140230300
 * Callers:
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MmFreePoolMemory @ 0x140237AB4 (MmFreePoolMemory.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiCleanupPageTablePages @ 0x14024F6AC (MiCleanupPageTablePages.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiReleaseNonPagedResources @ 0x140262BF8 (MiReleaseNonPagedResources.c)
 *     MiReturnPoolCharges @ 0x140262F90 (MiReturnPoolCharges.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiFreePageFileHashPfns @ 0x140265F8C (MiFreePageFileHashPfns.c)
 *     MiProbeLockFrame @ 0x14026BFF0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiReturnExcessPoolCommit @ 0x1402CB384 (MiReturnExcessPoolCommit.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiDeleteSegmentPages @ 0x1402D26AC (MiDeleteSegmentPages.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x1402D3E4C (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x1402D3FC8 (MiUnlockPageTableCharges.c)
 *     MiUnlockImageSection @ 0x1402F3190 (MiUnlockImageSection.c)
 *     MiDeleteSystemPageTableTail @ 0x140316970 (MiDeleteSystemPageTableTail.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiDeleteUltraMapContext @ 0x1403338F0 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14033404C (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1403350F0 (MiObtainMdlCharges.c)
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x14033699C (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiMakePartitionActive @ 0x140336C88 (MiMakePartitionActive.c)
 *     MiReleaseWriteInProgressCharges @ 0x140344D68 (MiReleaseWriteInProgressCharges.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MmReleaseResourceCharge @ 0x1403575AC (MmReleaseResourceCharge.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiDeleteSessionPdes @ 0x14038C378 (MiDeleteSessionPdes.c)
 *     MiGetFileHashPage @ 0x14038C940 (MiGetFileHashPage.c)
 *     MiSessionUpdateImageCharges @ 0x14039EFC0 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     MiPfnRangeIsZero @ 0x1403B91E8 (MiPfnRangeIsZero.c)
 *     MiReturnSplitPageCharges @ 0x1403CE3A8 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x14052AA54 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     MiUnlinkBadPages @ 0x14052D5F8 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140537EA0 (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiMoveBadPageCrossPartition @ 0x14054D4EC (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     MiRebuildLargePage @ 0x140550C08 (MiRebuildLargePage.c)
 *     MiGetSubsectionCharges @ 0x1405533F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1405583B8 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x140559AC8 (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055B46C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055B67C (MiReturnCrossPartitionCombineCharges.c)
 *     MiCreateLargePfnList @ 0x14055C42C (MiCreateLargePfnList.c)
 *     MiInsertPartitionPages @ 0x140560A70 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiRemoveVadCharges @ 0x1406247E0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140625BE0 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x1406602C0 (MiDeleteVadBitmap.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14076F1B0 (MiReturnSystemImageCommitment.c)
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408CB284 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x1408D2DDC (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1408DD930 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403BF0D4 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x14054EC44 (MiRestockOverCommit.c)
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
