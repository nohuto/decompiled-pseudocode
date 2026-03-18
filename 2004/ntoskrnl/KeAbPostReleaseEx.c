/*
 * XREFs of KeAbPostReleaseEx @ 0x140272DF0
 * Callers:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiLockAddressSpaceToo @ 0x140252198 (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x140265EC4 (MiLockControlAreaSectionExtend.c)
 *     PfLockSharedTryAcquire @ 0x14026BE68 (PfLockSharedTryAcquire.c)
 *     ExTryToAcquireFastMutex @ 0x140272BC0 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140272C60 (ExTryAcquirePushLockExclusiveEx.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402D00AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140323D90 (ExTryAcquirePushLockSharedEx.c)
 *     MiTryLockVad @ 0x14037FAB4 (MiTryLockVad.c)
 *     ExpReleaseFastResourceShared @ 0x14038BF50 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038C2A0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038C680 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038CD60 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038D200 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14038E040 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14038E7B0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x14050301C (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14053D210 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A95C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405AE940 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405AEA10 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14070709C (CmpTryToLockHashEntryExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140709E8C (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockKcbExclusive @ 0x14070D8E4 (CmpTryToLockKcbExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086F29C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140872824 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140881150 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DC5F0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14097CB30 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     KiForceSymbolReferences @ 0x140A8EA8C (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbEntryFree @ 0x140272F04 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
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
  v5 = ++CurrentThread->AbAllocationRegionCount;
  *(_BYTE *)(v2 + 26) &= ~1u;
  KeAbEntryFree(v2, a2, &v8);
  v6 = (__int64)(v2 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v5 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v6;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v6);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
