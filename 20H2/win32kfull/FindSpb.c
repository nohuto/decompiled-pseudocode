/*
 * XREFs of FindSpb @ 0x1C0219E64
 * Callers:
 *     OffsetWindow @ 0x1C003F2F0 (OffsetWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 *     RestoreSpb @ 0x1C021A0A0 (RestoreSpb.c)
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
