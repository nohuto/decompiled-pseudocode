/*
 * XREFs of ?_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1B8891
 * Callers:
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 * Callees:
 *     _TouchTargetingIntersectSegment@28 @ 0x1B8E4A (_TouchTargetingIntersectSegment@28.c)
 *     _TouchTargetingRank@40 @ 0x1B8FD7 (_TouchTargetingRank@40.c)
 *     _TouchTargetingSnapToSegment@28 @ 0x1B96A0 (_TouchTargetingSnapToSegment@28.c)
 */

void __userpurge _TTUpdateRankWithSegment(
        int a1@<edx>,
        int a2@<ecx>,
        LONG a3,
        LONG a4,
        _DWORD *a5,
        unsigned __int16 *a6,
        struct tagPOINT *a7,
        unsigned __int16 *a8,
        struct tagRECT a9,
        const struct tagTOUCHTARGETINGCONTACT *a10)
{
  LONG v11; // edx
  LONG v13; // edx
  LONG v14; // edi
  LONG v15; // edi
  LONG x; // esi
  LONG y; // edi
  LONG v18; // ecx
  int v19; // ecx
  int v20; // eax
  LONG v21; // eax
  int v22; // edx
  int v23; // esi
  int v24; // edi
  unsigned __int16 v25; // cx
  struct tagPOINT *v26; // [esp+Ch] [ebp-18h] BYREF
  LONG v27; // [esp+10h] [ebp-14h]
  struct tagPOINT *v28; // [esp+14h] [ebp-10h] BYREF
  LONG v29; // [esp+18h] [ebp-Ch]
  int v30; // [esp+1Ch] [ebp-8h]
  int v31; // [esp+20h] [ebp-4h]
  unsigned __int16 v32; // [esp+2Ch] [ebp+8h]
  struct tagPOINT *v33; // [esp+3Ch] [ebp+18h]

  v28 = 0;
  v29 = 0;
  v11 = a2;
  v26 = 0;
  v27 = 0;
  v30 = 0;
  v31 = 0;
  if ( a2 <= a3 )
    v11 = a3;
  if ( v11 >= a7->x )
  {
    v13 = a2;
    if ( a2 >= a3 )
      v13 = a3;
    if ( v13 < a7[1].x )
    {
      v14 = a1;
      if ( a1 <= a4 )
        v14 = a4;
      if ( v14 >= a7->y )
      {
        v15 = a1;
        if ( a1 >= a4 )
          v15 = a4;
        if ( v15 < a7[1].y && TouchTargetingIntersectSegment(a7, &v28, &v26, a2, a1, a3, a4) )
        {
          x = (LONG)v28;
          y = v29;
          v33 = v28;
          if ( v28 == v26 )
          {
            v33 = v28;
            v18 = v29;
            if ( v29 >= v27 )
              v18 = v27;
            if ( v18 <= a7->y )
            {
              y = a7->y;
            }
            else if ( v29 >= v27 )
            {
              y = v27;
            }
            v19 = v29;
            if ( v29 <= v27 )
              v19 = v27;
            v20 = a7[1].y - 1;
            if ( v19 < v20 )
            {
              v20 = v29;
              if ( v29 <= v27 )
                v20 = v27;
            }
          }
          else
          {
            v21 = (LONG)v28;
            if ( (int)v28 >= (int)v26 )
              v21 = (LONG)v26;
            if ( v21 <= a7->x )
            {
              x = a7->x;
            }
            else if ( (int)v28 >= (int)v26 )
            {
              x = (LONG)v26;
            }
            v22 = (int)v28;
            if ( (int)v28 <= (int)v26 )
              v22 = (int)v26;
            if ( v22 >= a7[1].x - 1 )
            {
              v33 = (struct tagPOINT *)(a7[1].x - 1);
              v20 = v29;
            }
            else
            {
              v20 = v29;
              if ( (int)v28 <= (int)v26 )
                v33 = v26;
            }
          }
          TouchTargetingSnapToSegment(x, y, v33, v20, a7[4].x, a7[4].y);
          v32 = *a6;
          if ( *a6 == 4094 || v30 != *a5 || v31 != a5[1] )
          {
            v23 = v31;
            v24 = v30;
            v25 = TouchTargetingRank(
                    a7[4].x,
                    a7[4].y,
                    v30,
                    v31,
                    a8,
                    a9.left,
                    a9.top,
                    a9.right,
                    ((int)a8 + a9.top) / 2,
                    (a9.right + a9.left) / 2);
            if ( v32 == 4094 || v25 < v32 )
            {
              *a6 = v25;
              *a5 = v24;
              a5[1] = v23;
            }
          }
        }
      }
    }
  }
}
