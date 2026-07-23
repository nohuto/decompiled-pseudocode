/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x1403927C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcChargeDirtyPages @ 0x140340F60 (CcChargeDirtyPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (__int64)PspSystemPartition;
  v5 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v6 = v2;
      if ( v2 > 0xFFFFFFFF )
        v6 = -1;
      v2 -= v6;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
      v7 = *(_QWORD *)(a1 + 8);
      if ( !v7 )
      {
        CcScheduleLazyWriteScan(v5, 0, 0);
        v7 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v6 + v7;
      CcChargeDirtyPages(0LL, 0LL, 0LL, (_DWORD *)v6);
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
    }
    while ( v2 );
  }
  return result;
}
