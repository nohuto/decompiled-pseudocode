/*
 * XREFs of MiNotifyPageHeat @ 0x14055FDC4
 * Callers:
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiGetLargePage @ 0x140303A34 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x140318700 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x140372BE4 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x1403F7C88 (MiAddPageToHeatList.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1405543E8 (MiMakeUnusedImageExtentsCold.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FDFC (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14055F678 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1405C9680 (HvlNotifyPageHeat.c)
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
