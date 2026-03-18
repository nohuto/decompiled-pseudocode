/*
 * XREFs of _TouchTargetingRank@40 @ 0x1B8FD7
 * Callers:
 *     ?_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1B8891 (-_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 * Callees:
 *     ?_TTRank@@YGGJ@Z @ 0x1B887D (-_TTRank@@YGGJ@Z.c)
 */

__int16 __stdcall TouchTargetingRank(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  unsigned int v10; // esi
  void *v11; // ecx
  int v12; // eax

  v10 = abs32(a3 - a1) + abs32(a4 - a2);
  if ( a1 <= a5 || a1 >= a7 )
    v11 = (void *)(a9 - a3);
  else
    v11 = (void *)(a4 - a10);
  v12 = v10 + (unsigned __int16)_TTRank(v11);
  if ( v12 >= 4093 )
    LOWORD(v12) = 4093;
  return v12;
}
