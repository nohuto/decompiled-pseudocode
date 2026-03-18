/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x14039EB90
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcChargeDirtyPagesInternal @ 0x14029E120 (CcChargeDirtyPagesInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (__int64)PspSystemPartition;
  v6 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v7 = v3;
      if ( v3 > 0xFFFFFFFF )
        v7 = -1;
      v3 -= v7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 704), &LockHandle);
      v8 = *(_QWORD *)(a1 + 8);
      if ( !v8 )
      {
        CcScheduleLazyWriteScan((_BYTE *)v6, v2, 0LL, 0);
        v8 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v7 + v8;
      CcChargeDirtyPagesInternal(0LL, 0LL, 0LL, v7, v6, v2);
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
            v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v12 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    while ( v3 );
  }
  return result;
}
