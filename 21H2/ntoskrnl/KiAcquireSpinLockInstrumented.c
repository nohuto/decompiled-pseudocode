/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x14045A310
 * Callers:
 *     IopQueueIrpToFileObject @ 0x140211BD0 (IopQueueIrpToFileObject.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 *     KiCallInterruptServiceRoutine @ 0x140294110 (KiCallInterruptServiceRoutine.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403072A0 (PpmUpdatePerformanceFeedback.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x140632C48 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // r14d
  int v3; // r15d
  int v4; // ebp
  char v6; // si
  unsigned __int64 v7; // rax
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v3 = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v3 = v7;
  }
  else
  {
    v6 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[6];
      SchedulerAssist[6] = v9 + 1;
      if ( v9 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6] - 1;
        v10[6] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    v12 = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
  }
  if ( v6 )
  {
    v13 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v13, v13 - v3, v4, InterruptCount, 0);
  }
}
