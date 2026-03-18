/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x14035CE78
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x14035CD58 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x14037FF84 (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x140394E44 (PopQueueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140562730 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140565FFC (PopFxPlatformStateAvailable.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405766C0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408DE9F4 (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14035CF90 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x14035D080 (PopDiagTraceSetDeepSleepConstraint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeClearForceIdle @ 0x14051D378 (KeClearForceIdle.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask |= 1 << a1;
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint();
    LOBYTE(v5) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v5);
    if ( !v3 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
