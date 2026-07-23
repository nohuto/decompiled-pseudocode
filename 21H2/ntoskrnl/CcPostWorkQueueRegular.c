/*
 * XREFs of CcPostWorkQueueRegular @ 0x140301D58
 * Callers:
 *     CcPostWorkQueue @ 0x140300E80 (CcPostWorkQueue.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD71C (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  unsigned __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r10
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  v5 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 120) - 2) & 0xFD) != 0 )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
  if ( *(_BYTE *)(a1 + 120) == 3 && *(_QWORD *)(v4 + 256) != v4 + 256 )
  {
    v14 = *(_QWORD *)(v4 + 640);
    if ( (v14 >= *(_QWORD *)(v4 + 664) >> 2 || v14 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 7104LL) >> 1)
      && *(_DWORD *)(v4 + 960) >= *(_DWORD *)(v4 + 200) )
    {
      *(_BYTE *)(v4 + 776) = 1;
    }
  }
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    goto LABEL_33;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( *(_BYTE *)(v4 + 352) )
    goto LABEL_10;
  v9 = (_QWORD *)(v4 + 208);
  v10 = *(__int64 **)(v4 + 208);
  if ( v10 == (__int64 *)(v4 + 208)
    || *(_BYTE *)(a1 + 120) == 2 && (unsigned int)(*(_DWORD *)(v4 + 368) + 1) > *(_DWORD *)(v4 + 960) )
  {
    goto LABEL_10;
  }
  v5 = *(_QWORD **)(v4 + 208);
  v11 = *v10;
  if ( (_QWORD *)v10[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
LABEL_33:
    __fastfail(3u);
  *v9 = v11;
  *(_QWORD *)(v11 + 8) = v9;
  ++*(_DWORD *)(v4 + 204);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 968)) <= 1 )
    __fastfail(0xEu);
LABEL_10:
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
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
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
