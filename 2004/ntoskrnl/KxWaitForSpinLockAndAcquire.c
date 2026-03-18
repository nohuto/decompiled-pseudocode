/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x1402D7A80
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
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // ebx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  v6 = 0;
  while ( 1 )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v5 );
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[6];
        SchedulerAssist[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64(v5, 0LL) )
      break;
    a1 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( a1 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = *((_DWORD *)a1 + 6) - 1;
        *((_DWORD *)a1 + 6) = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  return v6;
}
