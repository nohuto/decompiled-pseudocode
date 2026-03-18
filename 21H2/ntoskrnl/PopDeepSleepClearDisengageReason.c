/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1402D6004
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402D5EE4 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14038B744 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopSetPowerActionState @ 0x14038B860 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x1403A4EC4 (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405C94E0 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1405CD1FC (PopFxPlatformStateAvailable.c)
 *     PopThermalEventTransitionTimerCallback @ 0x1405D05C0 (PopThermalEventTransitionTimerCallback.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140845880 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x14098BC1C (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopIdleAoAcDozeToS4 @ 0x14099CEC0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402D6094 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402D6128 (PopDiagTraceClearDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x140579E04 (KeSetForceIdle.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  int v2; // ebx
  KIRQL v3; // al
  int v4; // edx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = 1 << a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v4 = PopDeepSleepDisengageReasonMask;
  v5 = v3;
  PopDeepSleepDisengageReasonMask &= ~v2;
  if ( v4 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint(a1);
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 2) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
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
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
