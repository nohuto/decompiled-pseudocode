/*
 * XREFs of ?_TTAddLineAndSegmentIntersection@@YGXUtagPOINT@@0JJJJPAU1@PAH@Z @ 0x1B84C2
 * Callers:
 *     ?_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z @ 0x1B85FF (-_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z.c)
 * Callees:
 *     ?_TTIntersectSegmentAndLine@@YGHUtagPOINT@@000PAU1@@Z @ 0x1B8705 (-_TTIntersectSegmentAndLine@@YGHUtagPOINT@@000PAU1@@Z.c)
 */

void __userpurge _TTAddLineAndSegmentIntersection(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT a5,
        struct tagPOINT a6,
        struct tagPOINT *a7,
        int *a8)
{
  int v8; // ecx
  int v9; // [esp+0h] [ebp-8h]

  if ( _TTIntersectSegmentAndLine((struct tagPOINT)__PAIR64__(a1, a2), a3, a5, a6, 0) == 1 )
  {
    v8 = *(_DWORD *)a4.y;
    if ( !*(_DWORD *)a4.y || *(_QWORD *)a4.x != v9 )
    {
      *(_DWORD *)(a4.x + 8 * v8) = v9;
      *(_DWORD *)(a4.x + 8 * v8 + 4) = 0;
      *(_DWORD *)a4.y = v8 + 1;
    }
  }
}
