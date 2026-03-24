/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x14051688C
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402043D0 (IoRemoveIoCompletion.c)
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140224070 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x1402472B0 (KiExecuteAllDpcs.c)
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     KiCallInterruptServiceRoutine @ 0x14027A9B0 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x140292580 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x140293860 (IopQueueIrpToFileObject.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x140353760 (IopDequeueIrpFromThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1403582C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405AB3D4 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // r14d
  int v6; // r15d
  int v7; // ebp
  char v9; // si
  unsigned __int64 v10; // rax
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v6 = 0;
  v7 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v9 = 1;
    v10 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v10) << 32;
    v6 = v10;
  }
  else
  {
    v9 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[6];
      SchedulerAssist[6] = v12 + 1;
      if ( v12 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
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
    v15 = KxWaitForSpinLockAndAcquire(a1, a2, a3, a4);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v7 = v15;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v15;
  }
  if ( v9 )
  {
    v16 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v16, v16 - v6, v7, InterruptCount, 0);
  }
}
