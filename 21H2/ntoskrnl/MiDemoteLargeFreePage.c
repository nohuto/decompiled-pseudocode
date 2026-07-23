/*
 * XREFs of MiDemoteLargeFreePage @ 0x14020F71C
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 * Callees:
 *     MiInsertDemotedPages @ 0x14020F840 (MiInsertDemotedPages.c)
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf

  CurrentIrql = KeGetCurrentIrql();
  v9 = a2 & ~(MiLargePageSizes[a3] - 1);
  v10 = MiSearchNumaNodeTable(48 * v9 / 48);
  v11 = 40LL;
  v12 = *(_QWORD *)(a1 + 16) + 4544LL * *(unsigned int *)(v10 + 8);
  if ( CurrentIrql < 2u && (a4 & 8) == 0 )
    v11 = 56LL;
  if ( !(unsigned int)MiTryUnlinkNodeLargePage(a1, v9, a3, v11, a5) )
    return 0LL;
  MiInsertDemotedPages(v12, 48 * v9, a3, a3 + 1, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
