/*
 * XREFs of MiNotifyPageHeat @ 0x1405B7E7C
 * Callers:
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiGetLargePageChain @ 0x140266158 (MiGetLargePageChain.c)
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiDemoteLocalLargePage @ 0x1402CA210 (MiDemoteLocalLargePage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MmSetPfnListInfo @ 0x1403C4E98 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x1405B766C (MiChangePageHeatImmediate.c)
 *     MiProcessTransitionHeatBatch @ 0x1405B7EB4 (MiProcessTransitionHeatBatch.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x1405B77AC (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x14065416C (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  MiLogNotifyPageHeat();
  LOBYTE(v2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, v2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
