/*
 * XREFs of BgpFoGetTextMetrics @ 0x14039926C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403AF7F4 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x1403B8814 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x1409F00D4 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409F4784 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140A94AE4 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14039929C (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
