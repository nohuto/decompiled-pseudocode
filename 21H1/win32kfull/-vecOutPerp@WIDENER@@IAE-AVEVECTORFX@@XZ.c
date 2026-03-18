/*
 * XREFs of ?vecOutPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237A1A
 * Callers:
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0 (-vAddStartCap@WIDENER@@IAEXXZ.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2375D8 (-vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 */

_DWORD *__thiscall WIDENER::vecOutPerp(int ***this, _DWORD *a2)
{
  int **v3; // edx
  _DWORD *result; // eax

  v3 = this[172];
  if ( (*(_BYTE *)v3 & 4) == 0 )
  {
    WIDENER::vVecPerpCompute((WIDENER *)this, this[172]);
    v3 = this[172];
  }
  result = a2;
  *a2 = v3[14];
  a2[1] = v3[15];
  return result;
}
