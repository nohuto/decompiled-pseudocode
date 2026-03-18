/*
 * XREFs of FindSpb @ 0x1C021ACF4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     OffsetWindow @ 0x1C00B05C8 (OffsetWindow.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     RestoreSpb @ 0x1C021AF30 (RestoreSpb.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall FindSpb(__int64 *a1)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(gpDispInfo + 32LL);
        result && (result[1] != a1 || ((_DWORD)result[6] & 2) != 0);
        result = (__int64 **)*result )
  {
    ;
  }
  return result;
}
