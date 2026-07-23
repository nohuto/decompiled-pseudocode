/*
 * XREFs of KiTryToAcquireQueuedSpinLockInstrumented @ 0x140516748
 * Callers:
 *     KxTryToAcquireQueuedSpinLock @ 0x14021614C (KxTryToAcquireQueuedSpinLock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405AB604 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiTryToAcquireQueuedSpinLockInstrumented(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v4; // r14d
  char v7; // si
  unsigned __int64 v8; // rax
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  unsigned __int64 v11; // rax
  _DWORD *v13; // rcx
  int v14; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v7 = 1;
    v8 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v8;
  }
  else
  {
    v7 = 0;
  }
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v10 = SchedulerAssist[6];
      SchedulerAssist[6] = v10 + 1;
      if ( v10 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
  {
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[6] - 1;
        v13[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v7 )
    {
      v11 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a2, v11, v11 - v4, 0, InterruptCount, 1);
    }
    return 1LL;
  }
}
