/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x14033FDF0
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x14033FCD0 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140382584 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x140397CDC (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140566760 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14056A07C (PopFxPlatformStateAvailable.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14071EB50 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140775C4C (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407B4D30 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E5994 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopIdleAoAcDozeToS4 @ 0x1408F7D60 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14033FE80 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14033FF14 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x1405214C8 (KeSetForceIdle.c)
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
