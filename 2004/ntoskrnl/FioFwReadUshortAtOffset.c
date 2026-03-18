/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1403AA90C
 * Callers:
 *     RaspLoadBearings @ 0x1403AA71C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403AA870 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403AA940 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403AB21C (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1405C062C (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1405C0CE0 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403AAD0C (FioFwReadBytesAtOffset.c)
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
