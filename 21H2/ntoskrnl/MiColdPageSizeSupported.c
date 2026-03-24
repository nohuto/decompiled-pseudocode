/*
 * XREFs of MiColdPageSizeSupported @ 0x1403F7D58
 * Callers:
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x1402FE654 (MiFreeLargePageMemory.c)
 *     MmSetPfnListInfo @ 0x140372BE4 (MmSetPfnListInfo.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F7D80 (MiDetermineNewPfnHeatState.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
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
