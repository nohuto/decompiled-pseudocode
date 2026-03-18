/*
 * XREFs of MiReturnPteMappingPair @ 0x140561BF0
 * Callers:
 *     MiSlowRotateCopy @ 0x1405381FC (MiSlowRotateCopy.c)
 * Callees:
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiReturnPteMappingPair(__int64 a1)
{
  unsigned __int8 v1; // bl
  char result; // al
  _QWORD *MmInternal; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v1 = *(_BYTE *)(a1 + 8);
  if ( v1 == 17 )
    return MiReleasePtes((__int64)&qword_140C4EDC0, *(_QWORD **)(a1 + 16), 2u);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    MmInternal[1543] = 0LL;
    v1 = *(_BYTE *)(a1 + 8);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (v1 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = v1;
  __writecr8(v1);
  return result;
}
