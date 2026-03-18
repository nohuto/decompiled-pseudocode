/*
 * XREFs of FioFwReadUlongAtOffset @ 0x1403CE3FC
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x1403A99B0 (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x140B5616C (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140B56268 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403A9E4C (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4u, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
