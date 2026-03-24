/*
 * XREFs of MiAddPageToHeatList @ 0x1403F7C88
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140232110 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x140303A34 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140372BE4 (MmSetPfnListInfo.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1405543E8 (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x14055F4FC (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x14055FDC4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges();
  if ( (_DWORD)result )
    return MiNotifyPageHeat(a1);
  return result;
}
