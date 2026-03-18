/*
 * XREFs of KeAbPostReleaseEx @ 0x140202870
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140201870 (ExTryAcquirePushLockSharedEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x1402027D0 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140208770 (ExTryAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PfLockSharedTryAcquire @ 0x14024452C (PfLockSharedTryAcquire.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402565AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1402F5424 (KiWaitForAllObjects.c)
 *     MiLockAddressSpaceToo @ 0x14031B674 (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x140355EBC (MiLockControlAreaSectionExtend.c)
 *     MiTryLockVad @ 0x140381868 (MiTryLockVad.c)
 *     ExpReleaseFastResourceShared @ 0x14038E410 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038E760 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038EB40 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038EE40 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F220 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038F6C0 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390530 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140390CA0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140506A2C (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x14053DE18 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140540BE0 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405B24A0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B2570 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1405F08A0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406D9B0C (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x1406DFD14 (CmpTryToLockKcbExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140874DEC (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140878374 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140886CA0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408E2430 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140982900 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     KiForceSymbolReferences @ 0x140A9478C (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x14021EB90 (KeAbEntryFree.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (ULONG_PTR)&CurrentThread->LockEntries[(unsigned __int8)(a2 >> 1)];
    if ( (*(_QWORD *)(v2 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v2, 0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)(a2 - 16LL * *(unsigned __int8 *)(a2 + 24));
  }
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  *(_BYTE *)(v2 + 26) &= ~1u;
  KeAbEntryFree(v2, a2, &v7);
  v5 = (__int64)(v2 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v5;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v5);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
