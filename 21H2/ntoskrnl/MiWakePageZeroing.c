/*
 * XREFs of MiWakePageZeroing @ 0x140309E78
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWakeZeroingThreads @ 0x14030A120 (MiWakeZeroingThreads.c)
 *     MiNodeLargeFreeZeroPages @ 0x140323B90 (MiNodeLargeFreeZeroPages.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakePageZeroing(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  _BYTE *i; // rbx
  __int64 v11; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentIrql = 17;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 4);
    if ( (result & 0x40) != 0 )
      return result;
    v7 = a2;
    v8 = a2 + 4544;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = v7 + 4544LL * (unsigned __int16)KeNumberNodes;
  }
  result = *(unsigned int *)(a1 + 6340);
  if ( !(_DWORD)result && v7 < v8 )
  {
    for ( i = (_BYTE *)(v7 + 4490); (unsigned __int64)(i - 4490) < v8; i += 4544 )
    {
      if ( !*i )
      {
        if ( !a2 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
            SchedulerAssist[5] = a3;
          }
LABEL_17:
          if ( *(_BYTE *)(a1 + 6297) )
          {
            v11 = *(_QWORD *)(i - 58);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 24), &LockHandle);
            if ( !*i )
            {
              *i = 1;
              MiWakeZeroingThreads(v11, 2LL);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            OldIrql = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v13 = KeGetCurrentIrql();
                if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v16 = (v15 & SchedulerAssist[5]) == 0;
                  a3 = (unsigned int)v15 & SchedulerAssist[5];
                  SchedulerAssist[5] = a3;
                  if ( v16 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(OldIrql);
          }
          else
          {
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4928);
            KxAcquireQueuedSpinLock(&LockHandle, a1 + 4928, a3, SchedulerAssist);
            if ( !*i )
            {
              *i = 1;
              KeSetEvent((PRKEVENT)(a1 + 6272), 0, 0);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          if ( !a2 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v17 = KeGetCurrentIrql();
                if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
                {
                  v18 = KeGetCurrentPrcb();
                  SchedulerAssist = v18->SchedulerAssist;
                  v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v16 = (v19 & SchedulerAssist[5]) == 0;
                  a3 = (unsigned int)v19 & SchedulerAssist[5];
                  SchedulerAssist[5] = a3;
                  if ( v16 )
                    KiRemoveSystemWorkPriorityKick(v18);
                }
              }
            }
            __writecr8(CurrentIrql);
          }
          goto LABEL_40;
        }
        if ( (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 1LL) >= 0x400
          && (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 0LL) < 0x100000 )
        {
          goto LABEL_17;
        }
      }
LABEL_40:
      result = 2LL;
    }
  }
  return result;
}
