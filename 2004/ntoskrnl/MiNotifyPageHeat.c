/*
 * XREFs of MiNotifyPageHeat @ 0x14055A924
 * Callers:
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x14031DC00 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x1403F1FD8 (MiAddPageToHeatList.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054EF48 (MiMakeUnusedImageExtentsCold.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A95C (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14055A1D8 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1405C41C0 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  MiLogNotifyPageHeat(a1);
  LOBYTE(v2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, v2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
