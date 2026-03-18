/*
 * XREFs of MiReturnPteMappingSet @ 0x1405B2504
 * Callers:
 *     MiSlowRotateCopy @ 0x1405952D8 (MiSlowRotateCopy.c)
 *     MiCopyMemoryPagefileData @ 0x140599780 (MiCopyMemoryPagefileData.c)
 *     MiFillPageWithImageExtentContents @ 0x14059E8F0 (MiFillPageWithImageExtentContents.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiReturnPteMappingSet(__int64 a1)
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
    return MiReleasePtes((__int64)&qword_140C534C0, *(_QWORD **)(a1 + 16), *(_DWORD *)(a1 + 4));
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
