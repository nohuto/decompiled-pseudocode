/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140271E00
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     MiRelinkStandbyPage @ 0x140271FD8 (MiRelinkStandbyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x1402AB810 (MiRemoveDecayClusterTimer.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  char v4; // r14
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rax
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(result - *(_QWORD *)(a1 + 4832)) >= 0x989680 )
  {
    v4 = *(_DWORD *)(a1 + 4824) + 1;
    *(_QWORD *)(a1 + 4832) = result;
    v5 = v4 & 3;
    result = *(_QWORD *)(a1 + 8 * v5 + 4792) >> 33;
    if ( result != 0x7FFFFFFF )
    {
      while ( 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
          SchedulerAssist[5] = v3;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 2664);
        KxAcquireQueuedSpinLock(&LockHandle, a1 + 2664, v3);
        v7 = *(_QWORD *)(a1 + 8LL * (unsigned int)v5 + 4792) >> 33;
        if ( v7 == 0x7FFFFFFF )
          break;
        v8 = v7 + qword_140C4E9A0;
        v9 = 48 * (v7 + qword_140C4E9A0) - 0x58000000000LL;
        v10 = *(_QWORD *)(v9 + 16);
        if ( qword_140C4DF40 && (v10 & 0x10) == 0 )
          v10 &= ~qword_140C4DF40;
        v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
        if ( v11 == v8 )
        {
          MiUnlinkPageFromList(v9, 1);
          *(_BYTE *)(v9 + 35) &= ~8u;
          MiRemoveDecayClusterTimer(v9);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
          v12 = 48 * v11 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            MiRelinkStandbyPage(v12);
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v18 = (v17 & v16[5]) == 0;
              v3 = (unsigned int)v17 & v16[5];
              v16[5] = v3;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(a1 + 4824) = v5;
  }
  return result;
}
