/*
 * XREFs of ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1C025EBA8
 * Callers:
 *     TouchTargetingIntersectSegment @ 0x1C025F57C (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025FC7C (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     ?_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z @ 0x1C025E9F4 (-_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z.c)
 */

__int64 __fastcall _TTIntersectLine(
        struct tagPOINT a1,
        struct tagPOINT a2,
        const struct tagTOUCHTARGETINGCONTACT *a3,
        struct tagPOINT *a4,
        struct tagPOINT *a5)
{
  int v7; // edx
  LONG x; // eax
  LONG v11; // eax
  LONG y; // ecx
  LONG v13; // eax
  int v14; // ebp
  unsigned int *v15; // r14
  bool v16; // zf
  struct tagPOINT *v17; // rcx
  struct tagPOINT v19; // [rsp+40h] [rbp-28h] BYREF
  struct tagPOINT v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0;
  v21 = 0;
  if ( a1 == a2 )
    return 0LL;
  x = a2.x;
  if ( a1.x > a2.x )
    x = a1.x;
  if ( x < *(_DWORD *)a3 )
    return 0LL;
  v11 = a2.x;
  if ( a1.x < a2.x )
    v11 = a1.x;
  if ( v11 > *((_DWORD *)a3 + 2) )
    return 0LL;
  y = a1.y;
  v13 = a1.y;
  if ( a1.y <= a2.y )
    v13 = a2.y;
  if ( v13 < *((_DWORD *)a3 + 1) )
    return 0LL;
  if ( a1.y >= a2.y )
    y = a2.y;
  if ( y > *((_DWORD *)a3 + 3) )
    return 0LL;
  v14 = 0;
  if ( *((int *)a3 + 11) <= 0 )
    return 0LL;
  v15 = (unsigned int *)((char *)a3 + 48);
  while ( 1 )
  {
    v16 = v7 == 2;
    if ( v7 >= 2 )
      break;
    ++v14;
    _TTAddLineAndSegmentIntersection(
      a1,
      a2,
      *v15,
      v15[1],
      *((_DWORD *)a3 + 2 * (v14 % *((_DWORD *)a3 + 11)) + 12),
      *((_DWORD *)a3 + 2 * (v14 % *((_DWORD *)a3 + 11)) + 13),
      &v19,
      &v21);
    v7 = v21;
    v15 += 2;
    if ( v14 >= *((_DWORD *)a3 + 11) )
    {
      v16 = v21 == 2;
      break;
    }
  }
  if ( !v16 )
    return 0LL;
  v17 = a5;
  *a4 = v19;
  *v17 = v20;
  return 1LL;
}
