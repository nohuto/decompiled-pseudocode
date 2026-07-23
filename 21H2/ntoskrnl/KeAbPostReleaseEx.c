/*
 * XREFs of KeAbPostReleaseEx @ 0x14020AFB0
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140207ED0 (ExTryAcquirePushLockSharedEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x14020AF10 (ExTryToAcquireFastMutex.c)
 *     MiLockControlAreaSectionExtend @ 0x14021E86C (MiLockControlAreaSectionExtend.c)
 *     KiWaitForAllObjects @ 0x14022A600 (KiWaitForAllObjects.c)
 *     MiLockAddressSpaceToo @ 0x14023BDD0 (MiLockAddressSpaceToo.c)
 *     PfLockSharedTryAcquire @ 0x14027378C (PfLockSharedTryAcquire.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14028A0AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402A9D70 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiTryLockVad @ 0x140381AB8 (MiTryLockVad.c)
 *     ExpReleaseFastResourceShared @ 0x14038EAD0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038EE20 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F200 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F870 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038FD10 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390B50 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403912C0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1405084DC (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140542920 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x14056003C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405B40D0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B41A0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406177B8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x14061EC84 (CmpTryToLockKcbExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406D89C0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087279C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140875DC0 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1408843A0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DFD50 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980200 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     KiForceSymbolReferences @ 0x140A925EC (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x140353870 (KeAbEntryFree.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
