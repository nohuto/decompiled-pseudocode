/*
 * XREFs of BgpFoGetTextMetrics @ 0x1403999FC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403A8F98 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x1403B9644 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x1409F00D4 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409F4784 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140A9426C (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140399A2C (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
