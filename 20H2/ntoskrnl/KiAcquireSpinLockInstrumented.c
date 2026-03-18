/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140514D4C
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140283880 (PpmUpdatePerformanceFeedback.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     KiExecuteAllDpcs @ 0x14028B270 (KiExecuteAllDpcs.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F58B0 (NtAssociateWaitCompletionPacket.c)
 *     PsGetThreadProperty @ 0x1402F6900 (PsGetThreadProperty.c)
 *     KiCallInterruptServiceRoutine @ 0x14033E8C0 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x1403403C0 (IopQueueIrpToFileObject.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405A99C8 (PerfLogSpinLockAcquire.c)
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
