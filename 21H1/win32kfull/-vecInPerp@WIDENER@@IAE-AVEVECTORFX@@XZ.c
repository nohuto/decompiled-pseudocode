/*
 * XREFs of ?vecInPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379B6
 * Callers:
 *     ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5 (-vAddEndCap@WIDENER@@IAEXXZ.c)
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2375D8 (-vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 */

_DWORD *__thiscall WIDENER::vecInPerp(int ***this, _DWORD *a2)
{
  int **v3; // edx
  _DWORD *result; // eax

  v3 = this[171];
  if ( (*(_BYTE *)v3 & 4) == 0 )
  {
    WIDENER::vVecPerpCompute((WIDENER *)this, this[171]);
    v3 = this[171];
  }
  result = a2;
  *a2 = v3[14];
  a2[1] = v3[15];
  return result;
}
