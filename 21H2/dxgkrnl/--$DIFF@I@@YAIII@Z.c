/*
 * XREFs of ??$DIFF@I@@YAIII@Z @ 0x1C001F68C
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C01BC66C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<unsigned int>(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1 - a2;
  if ( a1 <= a2 )
    return a2 - a1;
  return result;
}
