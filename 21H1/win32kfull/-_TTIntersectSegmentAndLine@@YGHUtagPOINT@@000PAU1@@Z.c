/*
 * XREFs of ?_TTIntersectSegmentAndLine@@YGHUtagPOINT@@000PAU1@@Z @ 0x1B8705
 * Callers:
 *     ?_TTAddLineAndSegmentIntersection@@YGXUtagPOINT@@0JJJJPAU1@PAH@Z @ 0x1B84C2 (-_TTAddLineAndSegmentIntersection@@YGXUtagPOINT@@0JJJJPAU1@PAH@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge _TTIntersectSegmentAndLine@<eax>(
        struct tagPOINT *a1@<ecx>,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT a5,
        struct tagPOINT *a6)
{
  int v7; // esi
  int v8; // esi
  int v9; // edx
  int result; // eax
  LONG y; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+28h] [ebp+14h]

  v19 = a3.x - a2.x;
  a3.y -= a2.y;
  v7 = (a4.x - a2.x) * (a5.y - a2.y);
  a5.y -= a2.y;
  v8 = v7 - (a4.y - a2.y) * (a5.x - a2.x);
  v9 = (a5.y - a3.y) * (a4.x - a3.x) - (a4.y - a2.y - a3.y) * (a5.x - a3.x);
  if ( !v8 )
  {
    result = 0;
    if ( !v9 )
      return result;
    *a1 = a2;
    return 1;
  }
  if ( !v9 )
  {
    a1->x = a3.x;
    y = a3.y;
LABEL_6:
    a1->y = a2.y + y;
    return 1;
  }
  if ( v8 <= 0 )
    v12 = v8 >> 31;
  else
    v12 = 1;
  if ( v9 <= 0 )
    v13 = v9 >> 31;
  else
    v13 = 1;
  if ( v12 != v13 )
  {
    v14 = v19 * (a5.y - (a4.y - a2.y)) + a3.y * (a4.x - a5.x);
    v15 = v19 * v8;
    v16 = a3.y * v8;
    if ( v15 <= 0 )
      v20 = v15 >> 31;
    else
      v20 = 1;
    v17 = abs32(v14 / 2);
    a1->x = a2.x + (int)(v15 + v20 * v17) / v14;
    if ( v16 <= 0 )
      v18 = v16 >> 31;
    else
      v18 = 1;
    y = (int)(v16 + v17 * v18) / v14;
    goto LABEL_6;
  }
  return 0;
}
