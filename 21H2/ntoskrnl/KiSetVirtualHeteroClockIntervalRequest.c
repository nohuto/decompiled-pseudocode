/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x140520BD4
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14051F0A0 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140520D10 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140210A74 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x140210B2C (KiSetClockInterval.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140210FD8 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140211054 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( byte_140C126A0 )
    {
      RtlRbRemoveNode(&KiClockIntervalRequests, &KiVirtualHeteroClockRequest);
      v4 = (unsigned int)dword_140C126A8;
      byte_140C126A0 = 0;
      if ( dword_140C126A8 )
        PoTraceSystemTimerResolutionKernel(0, dword_140C126A8, 1);
      KiSetClockIntervalToMinimumRequested(v3, v4);
    }
  }
  else if ( !byte_140C126A0 && KiQosHysteresisTimerPeriod )
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
