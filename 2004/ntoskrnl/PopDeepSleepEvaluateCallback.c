/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x140572240
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402DF038 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14056D628 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14056D6D8 (PopDiagTraceIdleResiliencyStart.c)
 */

__int64 PopDeepSleepEvaluateCallback()
{
  KIRQL i; // al
  __int64 v1; // rcx
  KIRQL v2; // bl
  BOOL v3; // r9d
  bool v4; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  __int64 result; // rax

  for ( i = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
        ;
        i = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock) )
  {
    v2 = i;
    LOBYTE(v1) = -PopDeepSleepEnforced;
    v3 = PopDeepSleepEnforced != 0;
    v4 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v1, v3 + 2);
    else
      PopDiagTraceIdleResiliencyStart(v1, v3 + 2, 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v4;
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (v2 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock(&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && v2 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v2 + 1));
        v9 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v11);
      }
    }
  }
  result = v2;
  __writecr8(v2);
  return result;
}
