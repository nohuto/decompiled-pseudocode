/*
 * XREFs of KiTryToAcquireSpinLockInstrumented @ 0x140516C04
 * Callers:
 *     KxTryToAcquireSpinLock @ 0x14024EC18 (KxTryToAcquireSpinLock.c)
 *     KiRemoveEntryTimer @ 0x1402EBFE0 (KiRemoveEntryTimer.c)
 *     KiCancelTimer @ 0x140353020 (KiCancelTimer.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405AB604 (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiTryToAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // r14d
  int v3; // r15d
  char v5; // si
  unsigned __int64 v6; // rax
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  char v10; // di
  int v11; // eax
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v3 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v3 = v6;
  }
  else
  {
    v5 = 0;
  }
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[6];
      SchedulerAssist[6] = v8 + 1;
      if ( v8 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    v10 = 0;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v9[6] - 1;
        v9[6] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    _mm_pause();
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    v10 = 1;
    if ( v5 )
    {
      v12 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a1, v12, v12 - v3, 0, InterruptCount, 0);
    }
  }
  return v10;
}
