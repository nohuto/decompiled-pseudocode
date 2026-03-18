/*
 * XREFs of ?vecInDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237984
 * Callers:
 *     ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5 (-vAddEndCap@WIDENER@@IAEXXZ.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x23756E (-vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 */

_DWORD *__thiscall WIDENER::vecInDraw(int ***this, _DWORD *a2)
{
  int **v3; // edx
  _DWORD *result; // eax

  v3 = this[171];
  if ( (*(_BYTE *)v3 & 8) == 0 )
  {
    WIDENER::vVecDrawCompute((WIDENER *)this, this[171]);
    v3 = this[171];
  }
  result = a2;
  *a2 = v3[16];
  a2[1] = v3[17];
  return result;
}
