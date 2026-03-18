/*
 * XREFs of _TouchTargetingIntersectSegment@28 @ 0x1B8E4A
 * Callers:
 *     ?OffsetInContact@@YGHUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x179CD1 (-OffsetInContact@@YGHUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1B8891 (-_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 * Callees:
 *     ?_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z @ 0x1B85FF (-_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z.c)
 */

int __fastcall TouchTargetingIntersectSegment(
        LONG *a1,
        LONG *a2,
        LONG *a3,
        LONG a4,
        struct tagPOINT a5,
        struct tagTOUCHTARGETINGCONTACT *a6)
{
  LONG v6; // ebx
  int x; // esi
  LONG v8; // ecx
  LONG v9; // edi
  LONG v10; // eax
  LONG y; // edx
  LONG v12; // edx
  LONG v13; // edi
  LONG v14; // edx
  LONG v15; // edx
  struct tagTOUCHTARGETINGCONTACT *v16; // eax
  LONG v17; // eax
  LONG v18; // edi
  bool v19; // cc
  int v20; // ebx
  int v21; // ebx
  int v22; // esi
  int v23; // esi
  int v24; // edi
  int v25; // eax
  int v26; // eax
  struct tagPOINT v28; // [esp-14h] [ebp-40h]
  struct tagPOINT *v29; // [esp+0h] [ebp-2Ch]
  struct tagPOINT *v30; // [esp+4h] [ebp-28h]
  struct tagPOINT v31; // [esp+Ch] [ebp-20h] BYREF
  struct tagPOINT v32; // [esp+14h] [ebp-18h] BYREF
  LONG v33; // [esp+1Ch] [ebp-10h]
  LONG *v34; // [esp+20h] [ebp-Ch]
  int v35; // [esp+24h] [ebp-8h]
  LONG v36; // [esp+28h] [ebp-4h]

  v35 = 0;
  v6 = a4;
  x = a5.x;
  v34 = a2;
  v28.y = a4;
  v28.x = (LONG)&v32;
  if ( !_TTIntersectLine(&v31, a1, v28, a5, a6, v29, v30) )
    return v35;
  v8 = v31.x;
  v9 = v31.x;
  v10 = v32.x;
  if ( v31.x >= v32.x )
    v9 = v32.x;
  y = a4;
  if ( a4 >= a5.y )
    y = a5.y;
  if ( v9 > y )
  {
    if ( v31.x >= v32.x )
      v12 = v32.x;
    else
      v12 = v31.x;
    goto LABEL_13;
  }
  if ( a4 >= a5.y )
  {
    v12 = a5.y;
LABEL_13:
    v36 = v12;
    goto LABEL_14;
  }
  v12 = a4;
  v36 = a4;
LABEL_14:
  *v34 = v12;
  v13 = v8;
  if ( v8 <= v10 )
    v13 = v10;
  v14 = a4;
  if ( a4 <= a5.y )
    v14 = a5.y;
  if ( v13 >= v14 )
  {
    v8 = a4;
    if ( a4 <= a5.y )
      v8 = a5.y;
  }
  else if ( v8 <= v10 )
  {
    v8 = v10;
  }
  *a3 = v8;
  if ( v36 <= v8 )
  {
    v15 = v31.y;
    v33 = v31.y;
    if ( v31.y >= v32.y )
      v33 = v32.y;
    v16 = a6;
    if ( a5.x < (int)a6 )
      v16 = (struct tagTOUCHTARGETINGCONTACT *)a5.x;
    if ( v33 <= (int)v16 )
    {
      v17 = (LONG)a6;
      if ( a5.x < (int)a6 )
        v17 = a5.x;
    }
    else if ( v31.y >= v32.y )
    {
      v17 = v32.y;
    }
    else
    {
      v17 = v31.y;
    }
    v34[1] = v17;
    if ( v15 <= v32.y )
    {
      v6 = a4;
      v33 = v32.y;
    }
    else
    {
      v33 = v15;
    }
    if ( a5.x <= (int)a6 )
      a5.x = (LONG)a6;
    v18 = v32.y;
    if ( v33 >= a5.x )
    {
      v18 = (LONG)a6;
      v15 = x;
      v19 = x <= (int)a6;
    }
    else
    {
      v19 = v15 <= v32.y;
    }
    if ( v19 )
      v15 = v18;
    a3[1] = v15;
    if ( v17 <= v15 )
    {
      v20 = v6 - a5.y;
      v35 = 1;
      if ( v20 <= 0 )
        v21 = v20 >> 31;
      else
        v21 = v35;
      v22 = x - (_DWORD)a6;
      if ( v22 <= 0 )
        v23 = v22 >> 31;
      else
        v23 = v35;
      if ( v36 - v8 <= 0 )
        v24 = (v36 - v8) >> 31;
      else
        v24 = v35;
      v25 = v17 - v15;
      if ( v25 <= 0 )
        v26 = v25 >> 31;
      else
        v26 = v35;
      if ( v21 * v23 != v24 * v26 )
      {
        *v34 = v8;
        *a3 = v36;
      }
    }
  }
  return v35;
}
