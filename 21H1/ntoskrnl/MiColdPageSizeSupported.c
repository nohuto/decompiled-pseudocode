/*
 * XREFs of MiColdPageSizeSupported @ 0x1403F0D48
 * Callers:
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MmSetPfnListInfo @ 0x14036FCF8 (MmSetPfnListInfo.c)
 *     MiLargePagePromote @ 0x1403EFD88 (MiLargePagePromote.c)
 *     MiChangePageHeatImmediate @ 0x1403F0CA0 (MiChangePageHeatImmediate.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F0D70 (MiDetermineNewPfnHeatState.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
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
