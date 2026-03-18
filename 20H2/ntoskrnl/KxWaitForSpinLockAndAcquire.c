/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140340590
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
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
