/*
 * XREFs of KdpTimeSlipWork @ 0x140A6F010
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseTimeRefreshLock @ 0x1407D6CBC (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A47884 (ExUpdateSystemTimeFromCmos.c)
 */

__int64 KdpTimeSlipWork()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  if ( ExAcquireTimeRefreshLock(0) )
  {
    ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    v0 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      KeSetEvent((PRKEVENT)KdpTimeSlipEvent, 0, 0);
    KxReleaseSpinLock(&KdpTimeSlipEventLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v6 = (v5 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v5;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v0);
  }
  return KiSetTimerEx((unsigned __int64)&KdpTimeSlipTimer, -1800000000LL, 0, 0, (__int64)&KdpTimeSlipDpc);
}
