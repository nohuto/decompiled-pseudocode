/*
 * XREFs of MiNotifyPageHeat @ 0x140560004
 * Callers:
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x140323450 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x140372734 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x1403F7C88 (MiAddPageToHeatList.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554628 (MiMakeUnusedImageExtentsCold.c)
 *     MiProcessTransitionHeatBatch @ 0x14056003C (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14055F8B8 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1405C98B0 (HvlNotifyPageHeat.c)
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
