/*
 * XREFs of _TouchTargetingSnapToSegment@28 @ 0x1B96A0
 * Callers:
 *     ?_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1B8891 (-_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

int __thiscall TouchTargetingSnapToSegment(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  __int64 v14; // rcx
  int v15; // [esp+Ch] [ebp-14h]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v8 = a6 - a2;
  v17 = a4 - a2;
  v18 = a5 - a3;
  v9 = v17 * v17 + v18 * v18;
  v15 = a7 - a3;
  v10 = v15 * v15 + v8 * v8;
  v11 = (a7 - a5) * (a7 - a5) + (a6 - a4) * (a6 - a4);
  if ( v11 >= v10 + v9 )
  {
    *this = a2;
    v12 = a3;
LABEL_5:
    this[1] = v12;
    return 0;
  }
  if ( v10 >= v11 + v9 )
  {
    *this = a4;
    v12 = a5;
    goto LABEL_5;
  }
  v14 = v18 * v8 - (__int64)(v17 * v15);
  *this = (v9 * a6 - v18 * v14) / v9;
  this[1] = (v9 * a7 + v17 * v14) / v9;
  return 1;
}
