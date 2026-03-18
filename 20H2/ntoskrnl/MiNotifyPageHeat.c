/*
 * XREFs of MiNotifyPageHeat @ 0x14055E2F4
 * Callers:
 *     MiReplenishPageSlist @ 0x140230AA0 (MiReplenishPageSlist.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MiAddPageToHeatList @ 0x1403F64EC (MiAddPageToHeatList.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140552918 (MiMakeUnusedImageExtentsCold.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     MiLogNotifyPageHeat @ 0x14055DBA8 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1405C7E50 (HvlNotifyPageHeat.c)
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
