/*
 * XREFs of KeResumeClockTimerSafe @ 0x140513F54
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1409AE2AC (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AF2C0 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x1409AFD4C (PnprWakeProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     KiResumeClockTimer @ 0x140383630 (KiResumeClockTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONGLONG KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v2; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v4; // r8
  int v5; // eax
  bool v6; // zf
  LONGLONG result; // rax

  if ( ObGetCurrentIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x3FFC;
  }
  KiResumeClockTimer();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v2 = KeGetCurrentIrql();
      if ( v2 <= 0xFu && CurrentIrql <= 0xFu && v2 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v6 = (v5 & v4[5]) == 0;
        v4[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
