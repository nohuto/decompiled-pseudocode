/*
 * XREFs of PopCheckForWork @ 0x1402D62A8
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1402D3A70 (PoRegisterDeviceForIdleDetection.c)
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1402D66F0 (PopCheckForIdleness.c)
 *     PopHandleSystemIdleReset @ 0x140368FC4 (PopHandleSystemIdleReset.c)
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405CFAF4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405CFC50 (PopCoalesingTimerDpcCallback.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForWork()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  result = (unsigned int)PopWorkerStatus;
  if ( (PopWorkerStatus & PopWorkerPending) != 0 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( PopPolicyLockThread != result )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
      if ( PopWorkerStatus < 0 )
      {
        PopWorkerStatus &= ~0x80000000;
        ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
      }
      KxReleaseSpinLock(&PopWorkerSpinLock);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v4 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
    }
  }
  return result;
}
