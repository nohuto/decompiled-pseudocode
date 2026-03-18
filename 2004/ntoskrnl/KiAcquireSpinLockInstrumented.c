/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x14051141C
 * Callers:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140218E10 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     KiExecuteAllDpcs @ 0x14029A020 (KiExecuteAllDpcs.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     NtAssociateWaitCompletionPacket @ 0x14030EF50 (NtAssociateWaitCompletionPacket.c)
 *     PsGetThreadProperty @ 0x1403271E0 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x140327990 (IopQueueIrpToFileObject.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405A5F28 (PerfLogSpinLockAcquire.c)
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
