/*
 * XREFs of KiGetDeepIdleProcessors @ 0x14030D6B0
 * Callers:
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140288400 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x1402885B0 (KeComplementAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14030D750 (PoCopyDeepIdleMask.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v12, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  PoCopyDeepIdleMask(a1);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeComplementAffinityEx((__int64)a2, a1);
  return KeAndAffinityEx(a2, (unsigned __int16 *)KeActiveProcessors, a2);
}
