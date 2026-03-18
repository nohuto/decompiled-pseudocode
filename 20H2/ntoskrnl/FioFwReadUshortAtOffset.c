/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1403AD2FC
 * Callers:
 *     RaspLoadBearings @ 0x1403AD10C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403AD260 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403AD330 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403ADC0C (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C42AC (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C4960 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403AD6FC (FioFwReadBytesAtOffset.c)
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
