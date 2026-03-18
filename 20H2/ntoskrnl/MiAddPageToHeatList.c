/*
 * XREFs of MiAddPageToHeatList @ 0x1403F64EC
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402C0930 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MiChangePageHeatImmediate @ 0x1403F6514 (MiChangePageHeatImmediate.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140552918 (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x14055DA2C (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x14055E2F4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  result = MiAddPageToHeatRanges();
  if ( (_DWORD)result )
    return MiNotifyPageHeat(a1, v3, v4, v5);
  return result;
}
