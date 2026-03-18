/*
 * XREFs of KeResumeClockTimerSafe @ 0x14056CB60
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140A677B8 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x140A692FC (PnprWakeProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     KiResumeClockTimer @ 0x14038BFAC (KiResumeClockTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v2; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v4; // r8
  int v5; // eax
  bool v6; // zf
  __int64 result; // rax

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
