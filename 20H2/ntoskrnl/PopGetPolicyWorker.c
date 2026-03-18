/*
 * XREFs of PopGetPolicyWorker @ 0x140363800
 * Callers:
 *     PopCheckForIdleness @ 0x140340000 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x140362C50 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1403A6F44 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x14056D14C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x14056D2C0 (PopCoalesingTimerDpcCallback.c)
 *     PopHandleSystemIdleReset @ 0x140575C14 (PopHandleSystemIdleReset.c)
 *     PopExecutePowerAction @ 0x140771228 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407718C0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140776070 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
