/*
 * XREFs of ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0133E10
 * Callers:
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C0131DD4 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01337D8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CF3FC (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0133EE4 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecOutPerp(WIDENER *a1, _QWORD *a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)a1 + 89);
  if ( (*(_DWORD *)v4 & 4) == 0 )
  {
    WIDENER::vVecPerpCompute(a1, (struct LINEDATA *)v4);
    v4 = *((_QWORD *)a1 + 89);
  }
  *a2 = *(_QWORD *)(v4 + 64);
  return a2;
}
