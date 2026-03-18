/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x14045B5B2
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14045ABA8 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x14045B6F0 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x14022F244 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x14022F2FC (KiSetClockInterval.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v3; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( a1 )
  {
    if ( byte_140C0CD20 )
    {
      RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, (unsigned __int64)&KiVirtualHeteroClockRequest);
      byte_140C0CD20 = 0;
      if ( dword_140C0CD28 )
        PoTraceSystemTimerResolutionKernel(0, dword_140C0CD28, 1);
      KiSetClockIntervalToMinimumRequested();
    }
  }
  else if ( !byte_140C0CD20 && KiQosHysteresisTimerPeriod )
  {
    KiSetClockInterval(KiQosHysteresisTimerPeriod, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v3 = KeGetCurrentIrql();
      if ( v3 <= 0xFu && CurrentIrql <= 0xFu && v3 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v7 = (v6 & v5[5]) == 0;
        v5[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
