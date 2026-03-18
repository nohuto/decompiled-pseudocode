/*
 * XREFs of ?vecOutDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379E8
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0 (-vAddStartCap@WIDENER@@IAEXXZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x23756E (-vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 */

_DWORD *__thiscall WIDENER::vecOutDraw(int ***this, _DWORD *a2)
{
  int **v3; // edx
  _DWORD *result; // eax

  v3 = this[172];
  if ( (*(_BYTE *)v3 & 8) == 0 )
  {
    WIDENER::vVecDrawCompute((WIDENER *)this, this[172]);
    v3 = this[172];
  }
  result = a2;
  *a2 = v3[16];
  a2[1] = v3[17];
  return result;
}
