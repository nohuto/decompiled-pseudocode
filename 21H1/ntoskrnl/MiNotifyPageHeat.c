/*
 * XREFs of MiNotifyPageHeat @ 0x14055A2D4
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiReplenishPageSlist @ 0x1402EA3B0 (MiReplenishPageSlist.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x14036FCF8 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x1403F0C78 (MiAddPageToHeatList.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054E8F8 (MiMakeUnusedImageExtentsCold.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A30C (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x140559B88 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1405C3A90 (HvlNotifyPageHeat.c)
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
