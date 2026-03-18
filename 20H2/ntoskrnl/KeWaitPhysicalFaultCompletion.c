/*
 * XREFs of KeWaitPhysicalFaultCompletion @ 0x14052247C
 * Callers:
 *     HvlNotifyPageHeat @ 0x1405C7E50 (HvlNotifyPageHeat.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEpfDrainCompletionQueue @ 0x1405226C8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140522774 (KiEpfStart.c)
 */

__int64 __fastcall KeWaitPhysicalFaultCompletion(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax

  ++dword_140C2AEFC;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiEpfDrainCompletionQueue();
  KiEpfStart(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & v6[5]) == 0;
        v6[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
