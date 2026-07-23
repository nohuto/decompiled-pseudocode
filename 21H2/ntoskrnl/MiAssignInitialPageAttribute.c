/*
 * XREFs of MiAssignInitialPageAttribute @ 0x1403C6D60
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140218D98 (MiInsertPhysicalPteMapping.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAssignInitialPageAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // si
  unsigned __int8 v6; // bl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v4 = a2;
  if ( (struct _KTHREAD *)qword_140C4E748 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1, a2, a3, a4);
  result = *(_BYTE *)(a1 + 34);
  if ( (result & 0xC0) == 0xC0 )
  {
    result = (v4 << 6) | result & 0x3F;
    *(_BYTE *)(a1 + 34) = result;
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
