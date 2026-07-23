/*
 * XREFs of MiAddPageToHeatList @ 0x1403F7C88
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MmSetPfnListInfo @ 0x140372734 (MmSetPfnListInfo.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554628 (MiMakeUnusedImageExtentsCold.c)
 * Callees:
 *     MiAddPageToHeatRanges @ 0x14055F73C (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiAddPageToHeatList(__int64 a1)
{
  __int64 result; // rax

  result = MiAddPageToHeatRanges();
  if ( (_DWORD)result )
    return MiNotifyPageHeat(a1);
  return result;
}
