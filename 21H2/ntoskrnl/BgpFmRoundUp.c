/*
 * XREFs of BgpFmRoundUp @ 0x1403A96AC
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403A8390 (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x1403A8E50 (RaspScanConvert.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x1403CADA8 (BgpRasGetGlyphTextCellDimensions.c)
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
