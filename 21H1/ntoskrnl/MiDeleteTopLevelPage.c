/*
 * XREFs of MiDeleteTopLevelPage @ 0x1402D5148
 * Callers:
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiClearContainingMapping @ 0x1402D51DC (MiClearContainingMapping.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteTopLevelPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v3 = 48 * a2 - 0x58000000000LL;
  v4 = (unsigned __int8)MiLockPageInline(v3, a2, a3);
  MiClearContainingMapping(v3);
  *(_QWORD *)(v3 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v3);
  v5 = MiDecrementShareCount(v3);
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
