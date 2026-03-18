/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1403B115C
 * Callers:
 *     RaspLoadBearings @ 0x1403B0F6C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403B10C0 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403B1190 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403B1A6C (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405BFF0C (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C05C0 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403B155C (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
