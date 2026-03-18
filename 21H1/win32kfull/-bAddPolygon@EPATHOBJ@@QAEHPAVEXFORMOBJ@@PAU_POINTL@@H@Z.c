/*
 * XREFs of ?bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z @ 0x221FE9
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?bAddRectToPath@@YGHAAVEPATHOBJ@@PAU_RECTL@@@Z @ 0x22202D (-bAddRectToPath@@YGHAAVEPATHOBJ@@PAU_RECTL@@@Z.c)
 *     ?bAddPgmToPath@@YGHAAVEPATHOBJ@@JJJJJJ@Z @ 0x223D8E (-bAddPgmToPath@@YGHAAVEPATHOBJ@@JJJJJJ@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EPATHOBJ::bAddPolygon(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3, int a4)
{
  int v4; // esi

  v4 = 0;
  if ( EPATHOBJ::bMoveTo(this, 0, a3) && EPATHOBJ::bPolyLineTo(this, 0, a3 + 1, 3u) )
    return EPATHOBJ::bCloseFigure(this) != 0;
  return v4;
}
