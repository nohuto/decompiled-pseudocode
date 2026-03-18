/*
 * XREFs of BgpFmRoundUp @ 0x14039BF98
 * Callers:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14039BEEC (BgpRasGetGlyphTextCellDimensions.c)
 *     BgpRasPrintGlyph @ 0x1403ABC48 (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x1403AC710 (RaspScanConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundUp(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
