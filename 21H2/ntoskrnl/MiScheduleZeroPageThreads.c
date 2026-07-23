/*
 * XREFs of MiScheduleZeroPageThreads @ 0x140260E24
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReduceZeroingThreads @ 0x140239A80 (MiReduceZeroingThreads.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LARGE_INTEGER __fastcall MiScheduleZeroPageThreads(__int64 a1)
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v3; // rsi
  unsigned int i; // ebx
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  result.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 6297) )
  {
    result = KeQueryPerformanceCounter(0LL);
    v3 = result;
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v5 = *(_QWORD *)(a1 + 16) + 4544LL * i;
      if ( *(_BYTE *)(v5 + 4490) )
      {
        v6 = *(_QWORD *)(v5 + 4432);
        v7 = *(_QWORD *)(v6 + 48);
        if ( v3.QuadPart <= v7 )
        {
          ++dword_140C2A2B0;
        }
        else if ( 1000000 * (v3.QuadPart - v7) / stru_140C4DF50.QuadPart < 0x10000 )
        {
          ++dword_140C2A2B4;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 24), &LockHandle);
          if ( *(_DWORD *)(v6 + 136) )
          {
            if ( v7 == *(_QWORD *)(v6 + 48) )
            {
              if ( (unsigned int)MiReduceZeroingThreads(v6, v5, 1) == 7 )
                ++dword_140C2A2BC;
              else
                ++dword_140C2A2C0;
              *(LARGE_INTEGER *)(v6 + 48) = KeQueryPerformanceCounter(0LL);
            }
            else
            {
              ++dword_140C2A2B8;
            }
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v13 = (v12 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v12;
                if ( v13 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
        }
      }
      else
      {
        ++dword_140C2A2AC;
      }
      result.QuadPart = (unsigned __int16)KeNumberNodes;
    }
  }
  return result;
}
