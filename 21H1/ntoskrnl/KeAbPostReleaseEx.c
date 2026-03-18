/*
 * XREFs of KeAbPostReleaseEx @ 0x140340F60
 * Callers:
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14023D27C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiLockAddressSpaceToo @ 0x1402AB1C8 (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x1402BEEF4 (MiLockControlAreaSectionExtend.c)
 *     KiWaitForAllObjects @ 0x1402CD0F4 (KiWaitForAllObjects.c)
 *     PfLockSharedTryAcquire @ 0x1402D5808 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140340780 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryToAcquireFastMutex @ 0x140340D30 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140340DD0 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiTryLockVad @ 0x14037F148 (MiTryLockVad.c)
 *     ExpReleaseFastResourceShared @ 0x14038B3E0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038B730 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038BB10 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038C1F0 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038C690 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14038D4D0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14038DC40 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1405029CC (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x140539DF8 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14053CBC0 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A30C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405AE220 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405AE2F0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpReceiveMessagePort @ 0x14060B9B0 (AlpcpReceiveMessagePort.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E36A8 (CmpTryToLockHashEntryExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406E610C (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockKcbExclusive @ 0x1406E9AB4 (CmpTryToLockKcbExclusive.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14086D7DC (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140871530 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14087FE60 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DB280 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14097B790 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     KiForceSymbolReferences @ 0x140A8F49C (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbEntryFree @ 0x140341074 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
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
  KeAbEntryFree(v2, a2, &v11);
  v6 = (__int64)(v2 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v5 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v6;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v6);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v11);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v8, v9);
}
