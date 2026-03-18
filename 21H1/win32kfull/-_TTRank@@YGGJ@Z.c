/*
 * XREFs of ?_TTRank@@YGGJ@Z @ 0x1B887D
 * Callers:
 *     _TouchTargetingDownrank@8 @ 0x1B8E01 (_TouchTargetingDownrank@8.c)
 *     _TouchTargetingRank@40 @ 0x1B8FD7 (_TouchTargetingRank@40.c)
 * Callees:
 *     <none>
 */

__int16 __thiscall _TTRank(void *this)
{
  int v1; // eax
  __int16 v2; // cx

  v1 = abs32((int)this);
  v2 = 20;
  if ( v1 <= 20 )
    return v1;
  return v2;
}
