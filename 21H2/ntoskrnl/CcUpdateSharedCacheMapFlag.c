/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x1402EE374
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x1402D083C (CcBoostLowPriorityWorkerThread.c)
 *     CcPurgeAndClearCacheSection @ 0x1402EF194 (CcPurgeAndClearCacheSection.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402F6308 (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x1402F9D80 (CcUpdateReadHistory.c)
 *     CcCopyReadEx @ 0x140320720 (CcCopyReadEx.c)
 *     CcMdlRead @ 0x1406D3BB0 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x1406EA378 (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x1406EF550 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  Partition = CcGetPartition(a1);
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
