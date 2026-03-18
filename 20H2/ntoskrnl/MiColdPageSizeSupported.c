/*
 * XREFs of MiColdPageSizeSupported @ 0x1403F65BC
 * Callers:
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiChangePageHeatImmediate @ 0x1403F6514 (MiChangePageHeatImmediate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F65E4 (MiDetermineNewPfnHeatState.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColdPageSizeSupported(unsigned int a1)
{
  __int64 result; // rax

  if ( (HvlEnlightenments & 0x8400000) == 0 )
    return 0LL;
  result = 1LL;
  if ( a1 > 1 && (HvlEnlightenments & 0x8000000) != 0 )
    return 0LL;
  return result;
}
