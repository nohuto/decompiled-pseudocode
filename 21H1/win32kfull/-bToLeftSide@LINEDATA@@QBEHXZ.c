/*
 * XREFs of ?bToLeftSide@LINEDATA@@QBEHXZ @ 0x235A82
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z @ 0x235DD7 (-cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z @ 0x2365ED (-vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall LINEDATA::bToLeftSide(LINEDATA *this)
{
  return *((_QWORD *)this + 2) > *((_QWORD *)this + 3);
}
