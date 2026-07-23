/*
 * XREFs of BgpFmRoundUp @ 0x14039C9B8
 * Callers:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14039C90C (BgpRasGetGlyphTextCellDimensions.c)
 *     BgpRasPrintGlyph @ 0x1403B1CB8 (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x1403B2780 (RaspScanConvert.c)
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
