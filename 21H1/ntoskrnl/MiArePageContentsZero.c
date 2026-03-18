/*
 * XREFs of MiArePageContentsZero @ 0x1405490A8
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140223EC0 (MiUnlinkNodeLargePageHelper.c)
 *     MiCreateSharedZeroPages @ 0x140225160 (MiCreateSharedZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiSlistGetFreePage @ 0x1402E9F80 (MiSlistGetFreePage.c)
 *     MiReplenishPageSlist @ 0x1402EA3B0 (MiReplenishPageSlist.c)
 *     MiCreateSystemPageTable @ 0x1403289C0 (MiCreateSystemPageTable.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x1403493F0 (MiLargePageFreeToZero.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiIsPageOnBadList @ 0x14034906C (MiIsPageOnBadList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckForZeroPage @ 0x1403F9CC0 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x140549650 (MiPageNotZero.c)
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
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
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
        LOBYTE(v10) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v9, v10, 0);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
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
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
