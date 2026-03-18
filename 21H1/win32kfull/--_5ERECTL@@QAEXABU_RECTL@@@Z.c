/*
 * XREFs of ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E
 * Callers:
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     _NtGdiPolyPatBlt@20 @ 0x56AE8 (_NtGdiPolyPatBlt@20.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z @ 0x93840 (-vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z.c)
 *     _GreSetBoundsRect@12 @ 0xAC258 (_GreSetBoundsRect@12.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0xBB856 (-vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0xBDEEA (-vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ERECTL::operator|=(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // edx
  int result; // eax

  if ( *a2 < *this )
    *this = *a2;
  v2 = a2[1];
  if ( v2 < this[1] )
    this[1] = v2;
  v3 = a2[2];
  if ( v3 > this[2] )
    this[2] = v3;
  result = a2[3];
  if ( result > this[3] )
    this[3] = result;
  return result;
}
