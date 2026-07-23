/*
 * XREFs of CcPostWorkQueueCachemapUninit @ 0x140301F10
 * Callers:
 *     CcPostWorkQueue @ 0x140300E80 (CcPostWorkQueue.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD71C (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueueCachemapUninit(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rsi
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r10
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1[16];
  v5 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
  {
    LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    goto LABEL_13;
  a1[1] = v8;
  *a1 = a2;
  *v8 = a1;
  v9 = (_QWORD *)(v4 + 328);
  *(_QWORD *)(a2 + 8) = a1;
  v10 = *(__int64 **)(v4 + 328);
  if ( v10 == (__int64 *)(v4 + 328) )
    goto LABEL_5;
  v5 = *(_QWORD **)(v4 + 328);
  v13 = *v10;
  if ( (_QWORD *)v5[1] != v9 || *(_QWORD **)(v13 + 8) != v5 )
LABEL_13:
    __fastfail(3u);
  *v9 = v13;
  *(_QWORD *)(v13 + 8) = v9;
  ++*(_DWORD *)(v4 + 344);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 968)) <= 1 )
    __fastfail(0xEu);
LABEL_5:
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
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v5 )
  {
    *v5 = 0LL;
    return ExQueueWorkItemToPartition((ULONG_PTR)v5);
  }
  return result;
}
