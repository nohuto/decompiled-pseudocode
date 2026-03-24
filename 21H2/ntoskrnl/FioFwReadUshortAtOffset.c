/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1403B31FC
 * Callers:
 *     RaspLoadBearings @ 0x1403B300C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403B3160 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403B3230 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403B3B0C (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C5ADC (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C6190 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403B35FC (FioFwReadBytesAtOffset.c)
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
