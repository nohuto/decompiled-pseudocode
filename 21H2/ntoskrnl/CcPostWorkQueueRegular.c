/*
 * XREFs of CcPostWorkQueueRegular @ 0x1402EEC18
 * Callers:
 *     CcPostWorkQueue @ 0x140275F94 (CcPostWorkQueue.c)
 * Callees:
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402768B4 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AE50C (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r11
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140D06910 & 0x20000) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 128) - 2) & 0xFD) != 0 )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  if ( *(_BYTE *)(a1 + 128) == 3 && *(_QWORD *)(v6 + 104) != v6 + 104 )
  {
    v10 = *(_QWORD *)(v4 + 992);
    if ( (v10 >= *(_QWORD *)(v4 + 1016) >> 2 || v10 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 16896LL) >> 1)
      && !CcIsWriteBehindThreadpoolAtLowPriority(v4) )
    {
      *(_BYTE *)(v6 + 224) = 1;
    }
  }
  v11 = *(_QWORD **)(a2 + 8);
  if ( *v11 != a2 )
    goto LABEL_34;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( *(_BYTE *)(v6 + 196) )
    goto LABEL_24;
  v12 = (_QWORD *)(v6 + 56);
  v13 = *(__int64 **)(v6 + 56);
  if ( v13 == (__int64 *)(v6 + 56)
    || *(_BYTE *)(a1 + 128) == 2 && (unsigned int)(*(_DWORD *)(v6 + 188) + 1) > *(_DWORD *)(v4 + 1224) )
  {
    goto LABEL_24;
  }
  v5 = *(_QWORD **)(v6 + 56);
  v14 = *v13;
  if ( (_QWORD *)v13[1] != v12 || *(__int64 **)(v14 + 8) != v13 )
LABEL_34:
    __fastfail(3u);
  *v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  ++*(_DWORD *)(v6 + 48);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1232)) <= 1 )
    __fastfail(0xEu);
  if ( v7 && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8)) <= 1 )
    __fastfail(0xEu);
LABEL_24:
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
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
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
