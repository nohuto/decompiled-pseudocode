/*
 * XREFs of TouchTargetingRankForRect @ 0x1C0260DBC
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C02154C0 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C02162EC (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0216B38 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     TouchTargetingRankForRegion @ 0x1C0261470 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C02604CC (-_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     _TTPixelsToHm @ 0x1C02616EC (_TTPixelsToHm.c)
 */

__int64 __fastcall TouchTargetingRankForRect(int *a1, struct tagRECT *a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  int v10; // r10d
  int v11; // r14d
  signed int v12; // eax
  int v13; // r12d
  int *v14; // rdi
  unsigned int v15; // r13d
  int v16; // r11d
  int v18; // r12d
  int v19; // r15d
  int v20; // r9d
  signed int v21; // edx
  signed int v22; // ecx
  LONG y; // r10d
  LONG x; // r11d
  __int16 v25; // ax
  int v26; // r15d
  int v27; // ecx
  LONG v28; // eax
  LONG v29; // r9d
  LONG left; // r13d
  int v31; // eax
  LONG top; // ecx
  int v33; // eax
  LONG bottom; // ecx
  int v35; // r8d
  unsigned int v36; // ecx
  unsigned int v37; // eax
  bool v38; // zf
  bool v39; // sf
  bool v40; // of
  LONG right; // eax
  LONG v42; // r15d
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rdx
  struct tagTOUCHTARGETINGCONTACT *v48; // [rsp+38h] [rbp-28h]
  int v49; // [rsp+40h] [rbp-20h]
  int v50; // [rsp+44h] [rbp-1Ch]
  struct tagPOINT v51; // [rsp+48h] [rbp-18h] BYREF
  struct tagRECT v52; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v53; // [rsp+A0h] [rbp+40h] BYREF

  v51 = 0LL;
  v53 = 4094;
  v52 = 0LL;
  if ( !a3[45] || !(unsigned int)IntersectRect(&v52, a1, a3) || a4 && !(unsigned int)IntersectRect(a1, a1, a4) )
    return 4094LL;
  if ( !(unsigned int)IntersectRect(a1, &a2->left, a1) )
    return 4094LL;
  v10 = a1[2];
  v11 = *a1;
  v49 = v10;
  if ( *a1 == v10 )
    return 4094LL;
  v12 = a1[1];
  v13 = a1[3];
  v50 = v12;
  if ( v12 == v13 )
    return 4094LL;
  v14 = a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v15 = a6;
  if ( !a6 )
  {
    v52 = *a2;
    if ( a4 && !(unsigned int)IntersectRect(&v52, &v52.left, a4) )
      return 4094LL;
    TTPixelsToHm((unsigned int)(v52.bottom - v52.top), (unsigned int)a3[47]);
    if ( (int)TTPixelsToHm((unsigned int)(v52.right - v52.left), (unsigned int)a3[46]) > 1400 && v16 > 1400 )
      return 4093LL;
    v12 = v50;
  }
  v18 = v13 - 1;
  v48 = (struct tagTOUCHTARGETINGCONTACT *)a3;
  v19 = v10 - 1;
  v20 = v18;
  if ( v11 == v10 - 1 )
  {
    v21 = v12;
    v22 = v11;
LABEL_22:
    v52 = *a2;
    _TTUpdateRankWithSegment(v22, v21, v11, v20, &v51, &v53, &v52, v48);
    goto LABEL_23;
  }
  v52 = *a2;
  if ( v12 != v18 )
  {
    _TTUpdateRankWithSegment(v11, v12, v11, v18, &v51, &v53, &v52, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v52 = *a2;
    _TTUpdateRankWithSegment(v11, v18, v19, v18, &v51, &v53, &v52, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v52 = *a2;
    _TTUpdateRankWithSegment(v49 - 1, v18, v49 - 1, v50, &v51, &v53, &v52, (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v48 = (struct tagTOUCHTARGETINGCONTACT *)a3;
    v20 = v50;
    v21 = v50;
    v22 = v49 - 1;
    goto LABEL_22;
  }
  _TTUpdateRankWithSegment(v11, v18, v19, v18, &v51, &v53, &v52, (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_23:
  if ( v53 == 4094 || !v14 )
    return v53;
  y = v51.y;
  x = v51.x;
  if ( v15 )
  {
    v25 = v15;
    if ( (_WORD)v15 != 3 )
      goto LABEL_55;
  }
  else
  {
    v25 = 0;
  }
  v26 = 200;
  if ( v25 == 3 )
    v26 = HIWORD(v15);
  v27 = v51.x - a3[8];
  *v14 = v27;
  v28 = y - a3[9];
  v51.x = v28;
  v14[1] = v28;
  if ( v27 )
  {
    if ( (int)TTPixelsToHm(abs32(v27), (unsigned int)a3[46]) > v26 )
      return 4094LL;
    v28 = v51.x;
  }
  if ( v28 && (int)TTPixelsToHm(abs32(v28), (unsigned int)a3[47]) > v26 )
    return 4094LL;
  if ( v15 )
  {
LABEL_55:
    if ( x == v11 )
    {
      if ( x + 1 < v49 - 1 && x + 1 < a3[2] )
        ++x;
    }
    else if ( x == v49 - 1 && x - 1 > v11 && x - 1 >= *a3 )
    {
      --x;
    }
    if ( y == v50 )
    {
      if ( y + 1 < v18 && y + 1 < a3[3] )
        ++y;
    }
    else if ( y == v18 && y - 1 > v50 && y - 1 >= a3[1] )
    {
      --y;
    }
    *v14 = x - a3[8];
    v14[1] = y - a3[9];
    return v53;
  }
  v29 = a3[8];
  left = a2->left;
  if ( v29 >= a2->left )
  {
    right = a2->right;
    if ( v29 < right )
      goto LABEL_53;
    v42 = a3[9];
    v51.x = a2->top;
    if ( v42 >= v51.x )
    {
      v51.x = a2->bottom;
      if ( v42 < v51.x )
        goto LABEL_50;
      v43 = abs32(v29 - right + 1);
      v44 = v42 - v51.x + 1;
    }
    else
    {
      v43 = abs32(v29 - right + 1);
      v44 = v42 - v51.x;
    }
    v35 = 0;
    v45 = abs32(v44);
    v40 = __OFSUB__(v43, v45);
    v38 = v43 == v45;
    v39 = (int)(v43 - v45) < 0;
    goto LABEL_49;
  }
  v31 = a3[9];
  top = a2->top;
  if ( v31 < top )
  {
    v33 = v31 - top;
LABEL_42:
    v35 = 0;
    v36 = abs32(v33);
    v37 = abs32(v29 - left);
    v40 = __OFSUB__(v37, v36);
    v38 = v37 == v36;
    v39 = (int)(v37 - v36) < 0;
LABEL_49:
    LOBYTE(v35) = !(v39 ^ v40 | v38);
    goto LABEL_51;
  }
  bottom = a2->bottom;
  if ( v31 >= bottom )
  {
    v33 = v31 - bottom + 1;
    goto LABEL_42;
  }
LABEL_50:
  v35 = 1;
LABEL_51:
  if ( v35 )
  {
    v46 = abs32(x - (left + a2->right) / 2);
    v47 = (unsigned int)a3[46];
    goto LABEL_54;
  }
LABEL_53:
  v46 = abs32(y - (a2->top + a2->bottom) / 2);
  v47 = (unsigned int)a3[47];
LABEL_54:
  if ( (int)TTPixelsToHm(v46, v47) <= 700 )
    goto LABEL_55;
  return 4094LL;
}
