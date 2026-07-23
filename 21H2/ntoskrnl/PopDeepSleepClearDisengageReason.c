/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x14026F810
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x14026F6F0 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140382D1C (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140568470 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14056BCCC (PopFxPlatformStateAvailable.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14066D4E0 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140779DBC (PopEnforceResiliencyScenarios.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407BA120 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E32F4 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopIdleAoAcDozeToS4 @ 0x1408F56A0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14026F8A0 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x14026F934 (PopDiagTraceClearDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSetForceIdle @ 0x1405231E8 (KeSetForceIdle.c)
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
