/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1403A9A4C
 * Callers:
 *     RaspLoadBearings @ 0x1403A985C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403A99B0 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1403A9A80 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403AA550 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14064ED90 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x14064F438 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403A9E4C (FioFwReadBytesAtOffset.c)
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
