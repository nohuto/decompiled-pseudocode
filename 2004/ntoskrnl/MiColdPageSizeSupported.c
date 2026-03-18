/*
 * XREFs of MiColdPageSizeSupported @ 0x1403F20A8
 * Callers:
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x140316778 (MiFreeLargePageMemory.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiChangePageHeatImmediate @ 0x1403F2000 (MiChangePageHeatImmediate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F20D0 (MiDetermineNewPfnHeatState.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
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
