/*
 * XREFs of BgpFoGetTextMetrics @ 0x14039BEBC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403AB988 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x1403BBAD0 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x1409F60D4 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409FA784 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140A99ECC (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14039BEEC (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
