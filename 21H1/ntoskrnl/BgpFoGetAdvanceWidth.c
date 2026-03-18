/*
 * XREFs of BgpFoGetAdvanceWidth @ 0x1405BE9E0
 * Callers:
 *     BgpTxtDisplayString @ 0x1409F4784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpRasGetGlyphAdvanceWidth @ 0x1405BFEBC (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BgpFoGetAdvanceWidth(int a1, int a2, int a3, int a4, __int64 a5)
{
  return BgpRasGetGlyphAdvanceWidth(a1, a2, a3, a4, a5);
}
