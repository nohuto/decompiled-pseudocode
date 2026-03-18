/*
 * XREFs of PopCheckForWork @ 0x14035CBB4
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x14033FD00 (PoRegisterDeviceForIdleDetection.c)
 *     PopCheckForIdleness @ 0x14035C8C0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14035ED80 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1403A43C4 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405690CC (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140569240 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140571B94 (PopHandleSystemIdleReset.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
