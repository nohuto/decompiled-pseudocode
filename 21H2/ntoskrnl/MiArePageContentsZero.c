/*
 * XREFs of MiArePageContentsZero @ 0x14054EE08
 * Callers:
 *     MiSlistGetFreePage @ 0x140215DB0 (MiSlistGetFreePage.c)
 *     MiCreateSystemPageTable @ 0x140296560 (MiCreateSystemPageTable.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCreateSharedZeroPages @ 0x1402E5FC0 (MiCreateSharedZeroPages.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x14030EA90 (MiLargePageFreeToZero.c)
 *     MiReplenishPageSlist @ 0x140323450 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckForZeroPage @ 0x140402EE0 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x14054F3B0 (MiPageNotZero.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  _QWORD *v8; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
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
        v8 = (_QWORD *)MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
        if ( KeCheckForZeroPage(v8) )
          MiPageNotZero((ULONG_PTR)v8, v3);
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v8, 0x11u, 0);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
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
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
