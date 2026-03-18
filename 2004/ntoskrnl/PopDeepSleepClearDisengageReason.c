/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1402DEDF0
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402DECD0 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x1403807C4 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x14039581C (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140562D80 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14056664C (PopFxPlatformStateAvailable.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140766C1C (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407A5BE0 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408DFB54 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopIdleAoAcDozeToS4 @ 0x1408F2150 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402DEE80 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402DEF14 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x14051DAF8 (KeSetForceIdle.c)
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
