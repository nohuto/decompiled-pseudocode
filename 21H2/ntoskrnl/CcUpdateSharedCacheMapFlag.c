/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x14023C5D4
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14023C3B4 (CcBoostLowPriorityWorkerThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140288EE4 (CcApplyLowIoPriorityToThread.c)
 *     CcUpdateReadHistory @ 0x14029CB9C (CcUpdateReadHistory.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     CcUnmapVacb @ 0x1406FAEA0 (CcUnmapVacb.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x1407BDF60 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(__int64 a1, int a2, char a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 528);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 704), &LockHandle);
  if ( a3 )
    *(_DWORD *)(a1 + 152) |= a2;
  else
    *(_DWORD *)(a1 + 152) &= ~a2;
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
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
