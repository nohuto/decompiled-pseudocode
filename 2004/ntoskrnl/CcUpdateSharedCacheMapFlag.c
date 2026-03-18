/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x140320EF0
 * Callers:
 *     CcCopyReadEx @ 0x14022EBC0 (CcCopyReadEx.c)
 *     CcUpdateReadHistory @ 0x14026543C (CcUpdateReadHistory.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402C56BC (CcApplyLowIoPriorityToThread.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403216F0 (CcBoostLowPriorityWorkerThread.c)
 *     CcMapAndCopyFromCache @ 0x1405FCB10 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 *     CcUnmapVacb @ 0x1406973FC (CcUnmapVacb.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // di
  int v5; // esi
  __int64 Partition; // rax
  int v8; // eax
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a3;
  v5 = a2;
  Partition = CcGetPartition((_QWORD *)a1, a2, a3, a4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v8 = *(_DWORD *)(a1 + 152);
  if ( v4 )
    v9 = v5 | v8;
  else
    v9 = ~v5 & v8;
  *(_DWORD *)(a1 + 152) = v9;
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
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
