/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1402D5F7C
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402D5E5C (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x14038B860 (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x1403A4264 (PopQueueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405C94E0 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1405CD1FC (PopFxPlatformStateAvailable.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1405D04CC (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405DC1D0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x14098BD1C (PopDirectedDripsIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402D6094 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1402D6184 (PopDiagTraceSetDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeClearForceIdle @ 0x140579CD4 (KeClearForceIdle.c)
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
