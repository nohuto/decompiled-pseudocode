/*
 * XREFs of FioFwReadUlongAtOffset @ 0x1403AB8FC
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x1403AD260 (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x140A98F88 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140A99084 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403AD6FC (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
