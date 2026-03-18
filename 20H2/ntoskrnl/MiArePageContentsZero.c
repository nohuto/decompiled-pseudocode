/*
 * XREFs of MiArePageContentsZero @ 0x14054D0C8
 * Callers:
 *     MiReplenishPageSlist @ 0x140230AA0 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402312D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiCreateSharedZeroPages @ 0x14028DDB0 (MiCreateSharedZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiSlistGetFreePage @ 0x140304260 (MiSlistGetFreePage.c)
 *     MiCreateSystemPageTable @ 0x1403360F0 (MiCreateSystemPageTable.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x14034DC00 (MiLargePageFreeToZero.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckForZeroPage @ 0x1404008A0 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x14054D670 (MiPageNotZero.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  __int64 v8; // r9
  _QWORD *v9; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  __int64 result; // rax

  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( KeGetCurrentPrcb()->HyperPte )
  {
    v7 = *(unsigned __int8 *)(v4 + 34) >> 6;
    if ( v7 == 3 )
    {
      a2 = 0LL;
    }
    else if ( v7 != 1 && a2 > 0x10 )
    {
      a2 = 16LL;
    }
    while ( a2 )
    {
      if ( (*(_BYTE *)(v4 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v4) )
      {
        v9 = (_QWORD *)MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000, v8);
        if ( KeCheckForZeroPage(v9) )
          MiPageNotZero((ULONG_PTR)v9, v3);
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v9, 0x11u, 0);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        goto LABEL_2;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
