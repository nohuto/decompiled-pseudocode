/*
 * XREFs of MiWakePageZeroing @ 0x140317258
 * Callers:
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWakeZeroingThreads @ 0x140317500 (MiWakeZeroingThreads.c)
 *     MiNodeLargeFreeZeroPages @ 0x14031E340 (MiNodeLargeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakePageZeroing(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  _BYTE *i; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentIrql = 17;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 4);
    if ( (result & 0x40) != 0 )
      return result;
    v5 = a2;
    v6 = a2 + 4544;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = v5 + 4544LL * (unsigned __int16)KeNumberNodes;
  }
  result = *(unsigned int *)(a1 + 6340);
  if ( !(_DWORD)result && v5 < v6 )
  {
    for ( i = (_BYTE *)(v5 + 4490); (unsigned __int64)(i - 4490) < v6; i += 4544 )
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
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
LABEL_17:
          if ( *(_BYTE *)(a1 + 6297) )
          {
            v10 = *(_QWORD *)(i - 58);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 24), &LockHandle);
            if ( !*i )
            {
              *i = 1;
              MiWakeZeroingThreads(v10, 2LL);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            OldIrql = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v12 = KeGetCurrentIrql();
                if ( v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && v12 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v14 = CurrentPrcb->SchedulerAssist;
                  v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v16 = (v15 & v14[5]) == 0;
                  v14[5] &= v15;
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
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4928));
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
                  v19 = v18->SchedulerAssist;
                  v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v16 = (v20 & v19[5]) == 0;
                  v19[5] &= v20;
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
