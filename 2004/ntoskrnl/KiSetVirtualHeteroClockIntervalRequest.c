/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x14051B4E4
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x1405199B0 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x14051B620 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F2E40 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0 (KiSetClockIntervalToMinimumRequested.c)
 *     KiSendClockInterruptToClockOwner @ 0x14034B9F4 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x14034BAAC (KiSetClockInterval.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
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
    if ( byte_140C124D8 )
    {
      RtlRbRemoveNode(&KiClockIntervalRequests, &KiVirtualHeteroClockRequest);
      v4 = (unsigned int)dword_140C124E0;
      byte_140C124D8 = 0;
      if ( dword_140C124E0 )
        PoTraceSystemTimerResolutionKernel(0, dword_140C124E0, 1);
      KiSetClockIntervalToMinimumRequested(v3, v4);
    }
  }
  else if ( !byte_140C124D8 && KiQosHysteresisTimerPeriod )
  {
    KiSetClockInterval(KiQosHysteresisTimerPeriod, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
