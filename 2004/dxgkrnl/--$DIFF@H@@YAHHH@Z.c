/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x1C000B034
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C0135A74 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01362C8 (BmlCompareRegionsWithPivot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<int>(int a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - a2);
  if ( a1 <= a2 )
    return (unsigned int)(a2 - a1);
  return result;
}
