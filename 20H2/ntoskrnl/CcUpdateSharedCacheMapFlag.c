/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1403168D4
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14024AAB8 (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x14024B8B4 (CcUpdateReadHistory.c)
 *     CcCopyReadEx @ 0x1402A3E70 (CcCopyReadEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140316460 (CcBoostLowPriorityWorkerThread.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     CcMdlRead @ 0x140657870 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x14067DAE8 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x1406809D0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 Partition; // rax
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = CcGetPartition((_QWORD *)a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v7 = *(_DWORD *)(a1 + 152);
  if ( a3 )
    v8 = a2 | v7;
  else
    v8 = ~a2 & v7;
  *(_DWORD *)(a1 + 152) = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
