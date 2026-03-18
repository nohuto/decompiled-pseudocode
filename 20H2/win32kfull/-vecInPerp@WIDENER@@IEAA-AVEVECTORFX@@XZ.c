/*
 * XREFs of ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0135DA8
 * Callers:
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C0133C98 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C0135728 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CDF5C (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0135E34 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

_QWORD *__fastcall WIDENER::vecInPerp(WIDENER *a1, _QWORD *a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)a1 + 88);
  if ( (*(_DWORD *)v4 & 4) == 0 )
  {
    WIDENER::vVecPerpCompute(a1, (struct LINEDATA *)v4);
    v4 = *((_QWORD *)a1 + 88);
  }
  *a2 = *(_QWORD *)(v4 + 64);
  return a2;
}
