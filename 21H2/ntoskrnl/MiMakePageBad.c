/*
 * XREFs of MiMakePageBad @ 0x1405C4E28
 * Callers:
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1405C5550 (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x140273354 (MiIsPageOnBadList.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdi
  _QWORD *Pool; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf

  v4 = 48 * a1 - 0x220000000000LL;
  Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
  v6 = (unsigned __int8)MiLockPageInline(v4);
  if ( !MiIsPageOnBadList(v4) )
  {
    if ( (a2 & 1) != 0 && (*(_BYTE *)(v4 + 35) & 0x40) == 0 )
    {
      MiAcquireNonPagedResources(
        *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
        1LL,
        0LL,
        1u);
      MiSetPfnRemovalRequested(v4, 1, 0, Pool);
      Pool = 0LL;
      _InterlockedIncrement(&dword_140C52B14);
    }
    if ( (a2 & 2) != 0 )
      MiInsertPageInFreeOrZeroedList(a1, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
