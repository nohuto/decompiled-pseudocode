/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x1402E47D0
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
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
