/*
 * XREFs of MiAddPageToHeatList @ 0x1403F0C78
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402942B0 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x14036FCF8 (MmSetPfnListInfo.c)
 *     MiChangePageHeatImmediate @ 0x1403F0CA0 (MiChangePageHeatImmediate.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054E8F8 (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x140559A0C (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x14055A2D4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges();
  if ( (_DWORD)result )
    return MiNotifyPageHeat(a1);
  return result;
}
