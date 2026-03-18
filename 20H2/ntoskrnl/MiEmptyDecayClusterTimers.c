/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140265568
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x14030FA40 (MiRemoveDecayClusterTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 result; // rax
  char v3; // r14
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  ULONG_PTR v11; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(result - *(_QWORD *)(a1 + 4832)) >= 0x989680 )
  {
    v3 = *(_DWORD *)(a1 + 4824) + 1;
    *(_QWORD *)(a1 + 4832) = result;
    v4 = v3 & 3;
    result = *(_QWORD *)(a1 + 8 * v4 + 4792) >> 33;
    if ( result != 0x7FFFFFFF )
    {
      while ( 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 2664);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 2664));
        v6 = *(_QWORD *)(a1 + 8LL * (unsigned int)v4 + 4792) >> 33;
        if ( v6 == 0x7FFFFFFF )
          break;
        v7 = v6 + qword_140C4E820;
        v8 = 48 * (v6 + qword_140C4E820) - 0x58000000000LL;
        v9 = *(_QWORD *)(v8 + 16);
        if ( qword_140C4DDC0 && (v9 & 0x10) == 0 )
          v9 &= ~qword_140C4DDC0;
        v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
        if ( v10 == v7 )
        {
          MiUnlinkPageFromList(v8);
          *(_BYTE *)(v8 + 35) &= ~8u;
          MiRemoveDecayClusterTimer(v8);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
          v11 = 48 * v10 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            MiRelinkStandbyPage(v11);
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v13 = KeGetCurrentIrql();
            if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v15 = CurrentPrcb->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v16 & v15[5]) == 0;
              v15[5] &= v16;
              if ( v17 )
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
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(a1 + 4824) = v4;
  }
  return result;
}
