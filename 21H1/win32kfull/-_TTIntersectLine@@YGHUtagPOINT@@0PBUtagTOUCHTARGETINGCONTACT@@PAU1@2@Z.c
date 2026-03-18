/*
 * XREFs of ?_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z @ 0x1B85FF
 * Callers:
 *     _TouchTargetingIntersectSegment@28 @ 0x1B8E4A (_TouchTargetingIntersectSegment@28.c)
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 * Callees:
 *     ?_TTAddLineAndSegmentIntersection@@YGXUtagPOINT@@0JJJJPAU1@PAH@Z @ 0x1B84C2 (-_TTAddLineAndSegmentIntersection@@YGXUtagPOINT@@0JJJJPAU1@PAH@Z.c)
 */

int __userpurge _TTIntersectLine@<eax>(
        struct tagPOINT *a1@<edx>,
        LONG *a2@<ecx>,
        struct tagPOINT a3,
        struct tagPOINT a4,
        const struct tagTOUCHTARGETINGCONTACT *a5,
        struct tagPOINT *a6,
        struct tagPOINT *a7)
{
  int v7; // eax
  bool v9; // cc
  LONG y; // edx
  LONG v11; // edx
  const struct tagTOUCHTARGETINGCONTACT *x; // edx
  const struct tagTOUCHTARGETINGCONTACT *v13; // edx
  LONG v14; // edx
  bool v15; // zf
  struct tagPOINT v17; // [esp-18h] [ebp-48h]
  struct tagPOINT *v18; // [esp+0h] [ebp-30h]
  int *v19; // [esp+4h] [ebp-2Ch]
  unsigned int *v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+14h] [ebp-1Ch] BYREF
  LONG v22; // [esp+18h] [ebp-18h]
  struct tagPOINT *v23; // [esp+1Ch] [ebp-14h]
  struct tagPOINT v24; // [esp+20h] [ebp-10h] BYREF
  int v25; // [esp+28h] [ebp-8h]
  int v26; // [esp+2Ch] [ebp-4h]

  v7 = 0;
  v23 = a1;
  v21 = 0;
  v9 = a3.y <= a4.y;
  if ( a3.y == a4.y )
  {
    if ( (const struct tagTOUCHTARGETINGCONTACT *)a4.x == a5 )
      return 0;
    v9 = a3.y <= a4.y;
  }
  y = a3.y;
  if ( v9 )
    y = a4.y;
  if ( y >= *a2 )
  {
    v11 = a3.y;
    if ( a3.y >= a4.y )
      v11 = a4.y;
    if ( v11 <= a2[2] )
    {
      x = (const struct tagTOUCHTARGETINGCONTACT *)a4.x;
      if ( a4.x <= (int)a5 )
        x = a5;
      if ( (int)x >= a2[1] )
      {
        v13 = (const struct tagTOUCHTARGETINGCONTACT *)a4.x;
        if ( a4.x >= (int)a5 )
          v13 = a5;
        if ( (int)v13 <= a2[3] )
        {
          v14 = 0;
          if ( a2[11] > 0 )
          {
            v20 = (unsigned int *)(a2 + 12);
            while ( 1 )
            {
              v15 = v7 == 2;
              if ( v7 >= 2 )
                break;
              v22 = v14 + 1;
              v17.y = (LONG)&v21;
              v17.x = (LONG)&v24;
              _TTAddLineAndSegmentIntersection(
                v20[1],
                *v20,
                *(struct tagPOINT *)&a2[2 * ((v14 + 1) % a2[11]) + 12],
                v17,
                (struct tagPOINT)__PAIR64__(a4.x, a3.y),
                (struct tagPOINT)__PAIR64__((unsigned int)a5, a4.y),
                v18,
                v19);
              v20 += 2;
              v14 = v22;
              v7 = v21;
              if ( v22 >= a2[11] )
              {
                v15 = v21 == 2;
                break;
              }
            }
            if ( v15 )
            {
              *v23 = v24;
              *(_DWORD *)a3.x = v25;
              *(_DWORD *)(a3.x + 4) = v26;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
