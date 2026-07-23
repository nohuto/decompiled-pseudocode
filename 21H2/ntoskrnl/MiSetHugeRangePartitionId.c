/*
 * XREFs of MiSetHugeRangePartitionId @ 0x140533C20
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetHugeRangePartitionId(
        KSPIN_LOCK *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int16 v4; // r13
  KSPIN_LOCK *v5; // rdi
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 *v10; // rsi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = *(_WORD *)a1;
  v5 = (KSPIN_LOCK *)(a2 + 4128);
  *(_QWORD *)&v16.OldIrql = 0LL;
  v6 = a1 + 516;
  v7 = a4 >> 18;
  v10 = (unsigned __int64 *)(qword_140C4E6B0 + 8 * ((a3 >> 18) & 0x3FFFF));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int64)a1 >= a2 )
  {
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    v5 = v6;
    v16.LockQueue.Lock = v6;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(a1 + 516, &LockHandle);
    v16.LockQueue.Lock = v5;
  }
  v16.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v16, (volatile __int64 *)v5);
  *(_QWORD *)(a2 + 424) -= v7;
  for ( a1[53] += v7; v7; --v7 )
  {
    *v10 = ((unsigned __int64)(v4 & 0x7FF) << 41) | *v10 & 0xFFF001FFFFEFFFFFuLL | 0xC0000;
    ++v10;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v16);
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
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
