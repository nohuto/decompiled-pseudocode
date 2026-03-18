/*
 * XREFs of MiAddPageToHeatList @ 0x1403F1FD8
 * Callers:
 *     MiDemoteLocalLargePage @ 0x14023B280 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 *     MiChangePageHeatImmediate @ 0x1403F2000 (MiChangePageHeatImmediate.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054EF48 (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x14055A05C (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x14055A924 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges();
  if ( (_DWORD)result )
    return MiNotifyPageHeat(a1);
  return result;
}
