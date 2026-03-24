/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x140520994
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14051EE60 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140520AD0 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140292B04 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x140292BBC (KiSetClockInterval.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140293068 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402930E4 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
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
    if ( byte_140C12770 )
    {
      RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, (unsigned __int64)&KiVirtualHeteroClockRequest);
      v6 = (unsigned int)dword_140C12778;
      byte_140C12770 = 0;
      if ( dword_140C12778 )
        PoTraceSystemTimerResolutionKernel(0, dword_140C12778, 1);
      KiSetClockIntervalToMinimumRequested(v5, v6);
    }
  }
  else if ( !byte_140C12770 && KiQosHysteresisTimerPeriod )
  {
    KiSetClockInterval(KiQosHysteresisTimerPeriod, 0, (__int64)&KiVirtualHeteroClockRequest, (__int64)SchedulerAssist);
    KiSendClockInterruptToClockOwner();
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
