/*
 * XREFs of HalpTscFallbackToPlatformSource @ 0x1404BC7A8
 * Callers:
 *     HalpTimerInitSystem @ 0x1403AC010 (HalpTimerInitSystem.c)
 *     HalpTimerReportIdleStateUsage @ 0x1403CA5A0 (HalpTimerReportIdleStateUsage.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A1D90 (KeIpiGenericCall.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CB25C (HalpTimerSchedulePeriodicQueries.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpTscTraceStatus @ 0x1404BC8A0 (HalpTscTraceStatus.c)
 */

__int64 __fastcall HalpTscFallbackToPlatformSource(PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v6; // eax
  bool v7; // zf
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)Context = 0LL;
  HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Context[0]) = HIDWORD(Context[0]);
  v2 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpTscFallback, (ULONG_PTR)Context);
  HalpTimerSchedulePeriodicQueries();
  KxReleaseSpinLock(&HalpTscFallbackLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return HalpTscTraceStatus(EventDescriptor);
}
