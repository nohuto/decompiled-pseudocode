/*
 * XREFs of MiColdPageSizeSupported @ 0x14023073C
 * Callers:
 *     MiDetermineCoalescedLargePageHeatState @ 0x140230700 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MiDetermineNewPfnHeatState @ 0x1403B78C4 (MiDetermineNewPfnHeatState.c)
 *     MmSetPfnListInfo @ 0x1403C4E98 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x1405B766C (MiChangePageHeatImmediate.c)
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
