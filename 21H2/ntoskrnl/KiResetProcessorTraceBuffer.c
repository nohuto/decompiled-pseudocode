/*
 * XREFs of KiResetProcessorTraceBuffer @ 0x140514FD0
 * Callers:
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiResetProcessorTraceBuffer()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v2; // rax
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
  v2 = __readmsr(0x570u);
  if ( (v2 & 1) != 0 )
  {
    __writemsr(0x570u, v2 & 0xFFFFFFFFFFFFFFFEuLL);
    __writemsr(0x561u, 0LL);
    __writemsr(0x571u, 0LL);
    __writemsr(0x570u, v2);
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
