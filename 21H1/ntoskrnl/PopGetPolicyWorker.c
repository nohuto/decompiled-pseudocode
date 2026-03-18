/*
 * XREFs of PopGetPolicyWorker @ 0x14035D440
 * Callers:
 *     PopCheckForIdleness @ 0x14035C8C0 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x14035ED80 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1403A43C4 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405690CC (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140569240 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140571B94 (PopHandleSystemIdleReset.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407619D0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140765680 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  v3 = v2;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
