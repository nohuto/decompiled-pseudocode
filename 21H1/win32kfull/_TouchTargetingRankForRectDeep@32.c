/*
 * XREFs of _TouchTargetingRankForRectDeep@32 @ 0x1B944B
 * Callers:
 *     ?TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@PAGPAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x17A2A5 (-TouchTargetingLayerHitTest@@YGHPAUtagWND@@UtagPOINT@@HPBUtagTOUCHTARGETINGCONTACT@@PAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z @ 0x1B85FF (-_TTIntersectLine@@YGHUtagPOINT@@0PBUtagTOUCHTARGETINGCONTACT@@PAU1@2@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z @ 0x1B8833 (-_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z.c)
 *     _TouchTargetingRank@40 @ 0x1B8FD7 (_TouchTargetingRank@40.c)
 *     _TouchTargetingSnapToSegment@28 @ 0x1B96A0 (_TouchTargetingSnapToSegment@28.c)
 */

int __fastcall TouchTargetingRankForRectDeep(LONG *a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  LONG *v8; // ebx
  LONG *v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edi
  int v13; // edx
  int v14; // esi
  int v15; // edx
  int result; // eax
  struct tagPOINT v17; // [esp-14h] [ebp-54h]
  struct tagPOINT v18; // [esp-Ch] [ebp-4Ch]
  struct tagPOINT *v19; // [esp+0h] [ebp-40h]
  int v20; // [esp+0h] [ebp-40h]
  int v21; // [esp+0h] [ebp-40h]
  int v22; // [esp+0h] [ebp-40h]
  int v23; // [esp+0h] [ebp-40h]
  struct tagPOINT *v24; // [esp+4h] [ebp-3Ch]
  int *v25; // [esp+4h] [ebp-3Ch]
  int *v26; // [esp+4h] [ebp-3Ch]
  int *v27; // [esp+4h] [ebp-3Ch]
  int *v28; // [esp+4h] [ebp-3Ch]
  int v29; // [esp+Ch] [ebp-34h] BYREF
  int v30; // [esp+10h] [ebp-30h]
  int v31; // [esp+14h] [ebp-2Ch]
  int v32; // [esp+18h] [ebp-28h]
  int v33; // [esp+1Ch] [ebp-24h]
  LONG *v34; // [esp+20h] [ebp-20h]
  int v35; // [esp+24h] [ebp-1Ch]
  int v36; // [esp+28h] [ebp-18h]
  struct tagPOINT v37; // [esp+2Ch] [ebp-14h] BYREF
  struct tagPOINT v38; // [esp+34h] [ebp-Ch] BYREF

  v8 = a1;
  v34 = a1;
  v29 = a5;
  v30 = a6;
  v31 = a7;
  v32 = a8;
  v37.x = 0;
  v37.y = 0;
  v38.x = 0;
  v38.y = 0;
  if ( !a1[45] || a2 && !IntersectRect(&v29, &v29, a2) )
    return 4094;
  if ( v29 == v31 )
    return 4094;
  if ( v30 == v32 )
    return 4094;
  v18.y = v8[8] + *a3;
  v18.x = v8[9];
  v17.y = v8[8];
  v17.x = (LONG)&v38;
  if ( !_TTIntersectLine(&v37, v8, v17, v18, (const struct tagTOUCHTARGETINGCONTACT *)(v18.x + a3[1]), v19, v24) )
    return 4094;
  v35 = 0;
  v36 = 0;
  if ( !a4 )
  {
    v9 = v34;
    v10 = v8[46];
    v33 = v34[8];
    _TTLimitDeepTargetingPoint(v10, v33, &v37.x, v20, v25);
    v11 = v9[47];
    v12 = v9[9];
    _TTLimitDeepTargetingPoint(v11, v12, &v37.y, v21, v26);
    _TTLimitDeepTargetingPoint(v10, v33, &v38.x, v22, v27);
    _TTLimitDeepTargetingPoint(v11, v12, &v38.y, v23, v28);
    v8 = v34;
  }
  TouchTargetingSnapToSegment(v37.x, v37.y, v38.x, v38.y, (a5 + a7) / 2, (a8 + a6) / 2);
  if ( !PtInRect(&v29, v35, v36) )
    return 4094;
  v14 = v35;
  LOWORD(result) = TouchTargetingRank(v8[8], v8[9], v35, v13, a5, a6, a7, a8, (a5 + a7) / 2, (a8 + a6) / 2);
  v15 = v36 - v8[9];
  result = (unsigned __int16)result;
  *a3 = v14 - v8[8];
  a3[1] = v15;
  return result;
}
