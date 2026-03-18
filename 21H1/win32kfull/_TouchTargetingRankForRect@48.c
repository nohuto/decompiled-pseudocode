/*
 * XREFs of _TouchTargetingRankForRect@48 @ 0x1B902D
 * Callers:
 *     ?BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1797A4 (-BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagREC.c)
 *     ?_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K@Z @ 0x17A3C7 (-_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     _TouchTargetingRankForRegion@32 @ 0x1B95CF (_TouchTargetingRankForRegion@32.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1B8891 (-_TTUpdateRankWithSegment@@YGXJJJJPAUtagPOINT@@PAGUtagRECT@@PBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

__int16 __fastcall TouchTargetingRankForRect(
        struct tagPOINT *a1,
        int *a2,
        int *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int16 *a9,
        __int64 a10,
        LONG a11)
{
  int v12; // edx
  int *v13; // eax
  int v14; // esi
  LONG v16; // eax
  int v17; // ecx
  int *v18; // ecx
  int v19; // edi
  int v20; // esi
  __int16 v21; // ax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  LONG x; // esi
  LONG v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  int v30; // ecx
  LONG y; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // edx
  bool v35; // zf
  bool v36; // sf
  bool v37; // of
  unsigned int v38; // eax
  int v39; // eax
  LONG v40; // eax
  int v41; // eax
  LONG v42; // [esp-20h] [ebp-80h]
  struct tagPOINT *v43; // [esp-14h] [ebp-74h]
  struct tagRECT v44; // [esp-Ch] [ebp-6Ch]
  struct tagRECT v45; // [esp-Ch] [ebp-6Ch]
  struct tagRECT v46; // [esp-Ch] [ebp-6Ch]
  const struct tagTOUCHTARGETINGCONTACT *v47; // [esp+4h] [ebp-5Ch]
  const struct tagTOUCHTARGETINGCONTACT *v48; // [esp+4h] [ebp-5Ch]
  const struct tagTOUCHTARGETINGCONTACT *v49; // [esp+4h] [ebp-5Ch]
  unsigned __int16 *v50; // [esp+10h] [ebp-50h] BYREF
  __int64 v51; // [esp+14h] [ebp-4Ch]
  LONG v52; // [esp+1Ch] [ebp-44h]
  int v53; // [esp+20h] [ebp-40h] BYREF
  int v54; // [esp+24h] [ebp-3Ch]
  int v55; // [esp+28h] [ebp-38h]
  signed int v56; // [esp+2Ch] [ebp-34h]
  int *v57; // [esp+30h] [ebp-30h]
  int v58; // [esp+34h] [ebp-2Ch] BYREF
  unsigned __int16 *v59; // [esp+38h] [ebp-28h] BYREF
  __int64 v60; // [esp+3Ch] [ebp-24h]
  LONG v61; // [esp+44h] [ebp-1Ch]
  int v62; // [esp+48h] [ebp-18h] BYREF
  int v63; // [esp+4Ch] [ebp-14h]
  int v64; // [esp+50h] [ebp-10h]
  int v65; // [esp+54h] [ebp-Ch]

  v57 = a3;
  v62 = a5;
  v58 = 4094;
  v56 = (signed int)a2;
  v63 = a6;
  v64 = a7;
  v65 = a8;
  v59 = a9;
  v60 = a10;
  v61 = a11;
  v50 = 0;
  v53 = 0;
  v54 = 0;
  v51 = 0LL;
  v52 = 0;
  if ( !a1[22].y || !IntersectRect(&v50, &v62, &a1->x) || v56 && !IntersectRect(&v62, &v62, (int *)v56) )
    return 4094;
  if ( !IntersectRect(&v62, (int *)&v59, &v62) )
    return 4094;
  if ( v62 == v64 )
    return 4094;
  v12 = v65;
  if ( v63 == v65 )
    return 4094;
  v13 = v57;
  if ( v57 )
  {
    *v57 = 0;
    v13[1] = 0;
  }
  if ( !a4 )
  {
    v50 = v59;
    v51 = v60;
    v52 = v61;
    if ( v56 && !IntersectRect(&v50, (int *)&v50, (int *)v56) )
      return 4094;
    v14 = _TTPixelsToHm(v52 - v51, a1[23].y);
    if ( _TTPixelsToHm(HIDWORD(v51) - (_DWORD)v50, a1[23].x) > 1400 && v14 > 1400 )
      return 4093;
    v12 = v65;
  }
  v16 = v12 - 1;
  v43 = a1;
  if ( v62 == v64 - 1 )
  {
    v17 = v62;
    v42 = v12 - 1;
LABEL_22:
    *(_QWORD *)&v44.left = v60;
    v44.right = v61;
    _TTUpdateRankWithSegment(v63, v17, v62, v42, &v53, (unsigned __int16 *)&v58, v43, v59, v44, v47);
    goto LABEL_23;
  }
  *(_QWORD *)&v44.left = v60;
  v44.right = v61;
  if ( v63 != v16 )
  {
    _TTUpdateRankWithSegment(v63, v62, v62, v16, &v53, (unsigned __int16 *)&v58, a1, v59, v44, v47);
    *(_QWORD *)&v45.left = v60;
    v45.right = v61;
    _TTUpdateRankWithSegment(v65 - 1, v62, v64 - 1, v65 - 1, &v53, (unsigned __int16 *)&v58, a1, v59, v45, v48);
    *(_QWORD *)&v46.left = v60;
    v46.right = v61;
    _TTUpdateRankWithSegment(v65 - 1, v64 - 1, v64 - 1, v63, &v53, (unsigned __int16 *)&v58, a1, v59, v46, v49);
    v17 = v64 - 1;
    v43 = a1;
    v42 = v63;
    goto LABEL_22;
  }
  _TTUpdateRankWithSegment(v12 - 1, v62, v64 - 1, v12 - 1, &v53, (unsigned __int16 *)&v58, a1, v59, v44, v47);
LABEL_23:
  if ( (_WORD)v58 == 4094 )
    return v58;
  v18 = v57;
  if ( !v57 )
    return v58;
  v19 = v54;
  v20 = v53;
  v55 = 3;
  if ( a4 )
  {
    v21 = a4;
    if ( (_WORD)a4 != (_WORD)v55 )
      goto LABEL_56;
  }
  else
  {
    v21 = 0;
  }
  v56 = 200;
  if ( v21 == (_WORD)v55 )
    v56 = HIWORD(a4);
  v22 = v53 - a1[4].x;
  *v57 = v22;
  v23 = v19 - a1[4].y;
  v55 = v23;
  v18[1] = v23;
  if ( v22 )
  {
    v24 = _TTPixelsToHm(abs32(v22), a1[23].x);
    if ( v24 > v56 )
      return 4094;
    v23 = v55;
  }
  if ( v23 )
  {
    v25 = _TTPixelsToHm(abs32(v23), a1[23].y);
    if ( v25 > v56 )
      return 4094;
  }
  if ( a4 )
  {
LABEL_55:
    v18 = v57;
LABEL_56:
    if ( v20 == v62 )
    {
      v40 = v20 + 1;
      v18 = v57;
      if ( v20 + 1 >= v64 - 1 || v40 >= a1[1].x )
        goto LABEL_64;
    }
    else
    {
      if ( v20 != v64 - 1 )
        goto LABEL_64;
      v40 = v20 - 1;
      if ( v20 - 1 <= v62 || v40 < a1->x )
        goto LABEL_64;
    }
    v20 = v40;
LABEL_64:
    v41 = v65 - 1;
    if ( v19 == v63 )
    {
      v18 = v57;
      if ( v19 + 1 < v41 && v19 + 1 < a1[1].y )
        ++v19;
    }
    else if ( v19 == v41 && v19 - 1 > v63 && v19 - 1 >= a1->y )
    {
      --v19;
    }
    *v18 = v20 - a1[4].x;
    v18[1] = v19 - a1[4].y;
    return v58;
  }
  x = a1[4].x;
  if ( x >= (int)v59 )
  {
    if ( x < SHIDWORD(v60) )
      goto LABEL_53;
    y = a1[4].y;
    v55 = y;
    if ( y < (int)v60 )
    {
      v32 = abs32(x - HIDWORD(v60) + 1);
      v33 = abs32(v55 - v60);
      v34 = 0;
      v37 = __OFSUB__(v32, v33);
      v35 = v32 == v33;
      v36 = (int)(v32 - v33) < 0;
LABEL_49:
      LOBYTE(v34) = !(v36 ^ v37 | v35);
      goto LABEL_51;
    }
    if ( y >= v61 )
    {
      v29 = y - v61 + 1;
      v30 = v29;
      LODWORD(v29) = x - HIDWORD(v60) + 1;
      goto LABEL_47;
    }
  }
  else
  {
    v27 = a1[4].y;
    if ( v27 < (int)v60 )
    {
      v28 = abs32(v27 - v60);
      LODWORD(v29) = x - (_DWORD)v59;
LABEL_48:
      v38 = abs32(v29);
      v34 = 0;
      v37 = __OFSUB__(v38, v28);
      v35 = v38 == v28;
      v36 = (int)(v38 - v28) < 0;
      goto LABEL_49;
    }
    if ( v27 >= v61 )
    {
      v29 = v27 - v61 + 1;
      v30 = v29;
      LODWORD(v29) = x - (_DWORD)v59;
LABEL_47:
      v28 = (HIDWORD(v29) ^ v30) - HIDWORD(v29);
      goto LABEL_48;
    }
  }
  v34 = 1;
LABEL_51:
  if ( v34 )
  {
    v20 = v53;
    v39 = _TTPixelsToHm(abs32(v53 - ((int)v59 + HIDWORD(v60)) / 2), a1[23].x);
    goto LABEL_54;
  }
LABEL_53:
  v39 = _TTPixelsToHm(abs32(v19 - ((int)v60 + v61) / 2), a1[23].y);
  v20 = v53;
LABEL_54:
  if ( v39 <= 700 )
    goto LABEL_55;
  return 4094;
}
