/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140510DCC
 * Callers:
 *     KiExecuteAllDpcs @ 0x140207510 (KiExecuteAllDpcs.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402543D0 (IopDequeueIrpFromThread.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140271E60 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CD580 (NtAssociateWaitCompletionPacket.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetThreadProperty @ 0x1402ED8B0 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x1402EE060 (IopQueueIrpToFileObject.c)
 *     KiCallInterruptServiceRoutine @ 0x140327EB0 (KiCallInterruptServiceRoutine.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405A5838 (PerfLogSpinLockAcquire.c)
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
