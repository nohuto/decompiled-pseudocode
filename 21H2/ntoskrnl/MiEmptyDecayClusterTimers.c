/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x14025FDA0
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x140229950 (MiRemoveDecayClusterTimer.c)
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // r8
  _DWORD *SchedulerAssist; // r9
  char v5; // r14
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rax
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // ebx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( (unsigned __int64)(result - *(_QWORD *)(v1 + 4832)) >= 0x989680 )
  {
    v5 = *(_DWORD *)(v1 + 4824) + 1;
    *(_QWORD *)(v1 + 4832) = result;
    v6 = v5 & 3;
    result = *(_QWORD *)(v1 + 8 * v6 + 4792) >> 33;
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
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 2664);
        KxAcquireQueuedSpinLock(&LockHandle, v1 + 2664, v3, SchedulerAssist);
        v8 = *(_QWORD *)(v1 + 8LL * (unsigned int)v6 + 4792) >> 33;
        if ( v8 == 0x7FFFFFFF )
          break;
        v9 = v8 + qword_140C4E9E0;
        v10 = 48 * (v8 + qword_140C4E9E0) - 0x58000000000LL;
        v11 = *(_QWORD *)(v10 + 16);
        if ( qword_140C4DF80 && (v11 & 0x10) == 0 )
          v11 &= ~qword_140C4DF80;
        v12 = (v11 >> 12) & 0xFFFFFFFFFLL;
        if ( v12 == v9 )
        {
          MiUnlinkPageFromList(v10);
          *(_BYTE *)(v10 + 35) &= ~8u;
          MiRemoveDecayClusterTimer(v10);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
          v13 = 48 * v12 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            v14 = *(_BYTE *)(v13 + 35) & 7;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            MiRelinkStandbyPage(v13, v14);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v15 = KeGetCurrentIrql();
            if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v18 = (v17 & SchedulerAssist[5]) == 0;
              v3 = (unsigned int)v17 & SchedulerAssist[5];
              SchedulerAssist[5] = v3;
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
    *(_DWORD *)(v1 + 4824) = v6;
  }
  return result;
}
