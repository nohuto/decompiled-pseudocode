/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0144830
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C002A4B0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C002AC18 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C01447F8 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C0144F64 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C0144FDC (-vParentError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x1C0145040 (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  bool v2; // zf
  HFDBASIS64 *v5; // r14
  struct _RECTFX *v6; // rdi
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // esi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r11
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  _RECTFX v83; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v84; // [rsp+40h] [rbp-20h] BYREF
  int v85; // [rsp+48h] [rbp-18h]
  int v86; // [rsp+4Ch] [rbp-14h]
  int v87; // [rsp+50h] [rbp-10h]
  int v88; // [rsp+54h] [rbp-Ch]
  int v89; // [rsp+58h] [rbp-8h]
  int v90; // [rsp+5Ch] [rbp-4h]
  __int64 v91; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 41) == 0;
  v83 = 0LL;
  if ( v2 )
  {
    v5 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v84);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v84.y);
    HFDBASIS64::vInit(this, v84.x, v85, v87, v89);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v84.y, v86, v88, v90);
    v6 = (struct _RECTFX *)*((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v6 || (vBoundBox(&v84, &v83), bIntersect(&v83, v6)) )
    {
      v7 = *((_QWORD *)this + 2);
      v8 = *((_QWORD *)this + 3);
      v9 = *((_QWORD *)this + 6);
      v10 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v11 = -v7;
        v12 = -v8;
        v13 = -v7;
        if ( v8 >= 0 )
          v12 = v8;
        if ( v7 >= 0 )
          v13 = v7;
        if ( v13 <= v12 )
        {
          v11 = v8;
          if ( v8 < 0 )
            v11 = -v8;
        }
        else if ( v7 >= 0 )
        {
          v11 = v7;
        }
        v14 = *((_QWORD *)this + 16);
        if ( v11 <= v14 )
        {
          v15 = -v9;
          v16 = -v10;
          v17 = -v9;
          if ( v10 >= 0 )
            v16 = v10;
          if ( v9 >= 0 )
            v17 = v9;
          if ( v17 <= v16 )
          {
            v15 = v10;
            if ( v10 < 0 )
              v15 = -v10;
          }
          else if ( v9 >= 0 )
          {
            v15 = v9;
          }
          if ( v15 <= v14 )
            break;
        }
        *((_DWORD *)this + 41) *= 2;
        v18 = *((_QWORD *)this + 3);
        v19 = *((_QWORD *)this + 7);
        v7 = (v18 + *((_QWORD *)this + 2)) >> 3;
        v9 = (v19 + *((_QWORD *)this + 6)) >> 3;
        *((_QWORD *)this + 1) = (*((_QWORD *)this + 1) - v7) >> 1;
        v8 = v18 >> 2;
        v20 = (*((_QWORD *)this + 5) - v9) >> 1;
        v10 = v19 >> 2;
        *((_QWORD *)this + 7) = v10;
        *((_QWORD *)this + 2) = v7;
        *((_QWORD *)this + 3) = v8;
        *((_QWORD *)this + 6) = v9;
        *((_QWORD *)this + 5) = v20;
      }
    }
    v2 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v2 )
    {
      v21 = *((_QWORD *)v5 + 2);
      v22 = *((_QWORD *)this + 14);
      v23 = *((_QWORD *)v5 + 1);
      *(_QWORD *)v5 += v23;
      *((_QWORD *)v5 + 1) = v21 + v23;
      v24 = 2 * v21 - *((_QWORD *)v5 + 3);
      v25 = 2 * v22 - *((_QWORD *)this + 15);
      v26 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 12) += v26;
      *((_QWORD *)this + 13) = v22 + v26;
      *((_QWORD *)this + 15) = v22;
      v27 = -v21;
      *((_QWORD *)v5 + 2) = v24;
      *((_QWORD *)v5 + 3) = v21;
      *((_QWORD *)this + 14) = v25;
      v28 = -*((_QWORD *)this + 10);
      v29 = v28;
      if ( v21 >= 0 )
        v27 = v21;
      if ( v24 >= 0 )
        v29 = *((_QWORD *)this + 10);
      if ( v29 <= v27 )
      {
        v28 = v21;
        if ( v21 < 0 )
          v28 = -v21;
      }
      else if ( *((__int64 *)this + 10) >= 0 )
      {
        v28 = *((_QWORD *)this + 10);
      }
      v30 = (__int64 *)((char *)this + 120);
      v91 = v28;
      if ( v28 > geqErrorHigh )
        goto LABEL_51;
      v31 = *v30;
      v32 = -v25;
      v33 = -v25;
      v34 = -*v30;
      if ( v25 >= 0 )
        v33 = v25;
      if ( v31 >= 0 )
        v34 = *v30;
      if ( v33 <= v34 )
      {
        v32 = *v30;
        if ( v31 < 0 )
          v32 = -*v30;
      }
      else if ( v25 >= 0 )
      {
        v32 = v25;
      }
      v91 = v32;
      if ( v32 > geqErrorHigh )
      {
LABEL_51:
        *((_DWORD *)this + 40) *= 2;
        v35 = *((_QWORD *)this + 11);
        v36 = (v35 + *((_QWORD *)this + 10)) >> 3;
        v37 = (*((_QWORD *)this + 9) - v36) >> 1;
        *((_QWORD *)this + 10) = v36;
        v38 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 9) = v37;
        v39 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 11) = v35 >> 2;
        v40 = *v30;
        v41 = (*v30 + v38) >> 3;
        *((_QWORD *)this + 14) = v41;
        *v30 = v40 >> 2;
        *((_QWORD *)this + 13) = (v39 - v41) >> 1;
      }
      while ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        HFDBASIS64::vParentError(v5, &v91);
        v42 = geqErrorHigh;
        if ( v91 > geqErrorHigh )
          break;
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v91);
        if ( v91 > v42 )
          break;
        v43 = *((_QWORD *)this + 10);
        v44 = *((_QWORD *)this + 9);
        *((_QWORD *)this + 11) *= 4LL;
        *v30 *= 4LL;
        v45 = v43 + 2 * v44;
        v46 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 9) = v45;
        v47 = v43;
        v48 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 10) = 8 * v47 - *((_QWORD *)this + 11);
        *((_QWORD *)this + 13) = v48 + 2 * v46;
        *((_QWORD *)this + 14) = 8 * v48 - *v30;
        *((int *)this + 40) >>= 1;
      }
    }
  }
  v49 = *((_QWORD *)this + 2);
  v50 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v50;
  v51 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v49 + v50;
  *((_QWORD *)this + 2) = 2 * v49 - *((_QWORD *)this + 3);
  v52 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v52;
  *((_QWORD *)this + 3) = v49;
  v53 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = v53 + v52;
  *((_QWORD *)this + 6) = 2 * v53 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v53;
  a2->x = (v51 + 0x8000000) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v2 = (*((_DWORD *)this + 41))-- == 1;
  v54 = *((_DWORD *)this + 41);
  if ( v2 && !*((_DWORD *)this + 40) )
    return 0LL;
  v56 = *((_QWORD *)this + 2);
  v57 = *((_QWORD *)this + 3);
  v58 = -v56;
  v59 = -v56;
  v60 = -v57;
  if ( v57 >= 0 )
    v60 = *((_QWORD *)this + 3);
  if ( v56 >= 0 )
    v59 = *((_QWORD *)this + 2);
  if ( v59 <= v60 )
  {
    v58 = *((_QWORD *)this + 3);
    if ( v57 < 0 )
      v58 = -*((_QWORD *)this + 3);
  }
  else if ( v56 >= 0 )
  {
    v58 = *((_QWORD *)this + 2);
  }
  v61 = *((_QWORD *)this + 16);
  v91 = v58;
  if ( v58 > v61 )
    goto LABEL_81;
  v62 = *((_QWORD *)this + 6);
  v63 = *((_QWORD *)this + 7);
  v64 = -v62;
  v65 = -v62;
  v66 = -v63;
  if ( v63 >= 0 )
    v66 = *((_QWORD *)this + 7);
  if ( v62 >= 0 )
    v65 = *((_QWORD *)this + 6);
  if ( v65 <= v66 )
  {
    v64 = *((_QWORD *)this + 7);
    if ( v63 < 0 )
      v64 = -*((_QWORD *)this + 7);
  }
  else if ( v62 >= 0 )
  {
    v64 = *((_QWORD *)this + 6);
  }
  v91 = v64;
  if ( v64 > v61 )
  {
LABEL_81:
    *((_DWORD *)this + 41) = 2 * v54;
    v67 = *((_QWORD *)this + 3);
    v68 = (v67 + *((_QWORD *)this + 2)) >> 3;
    v69 = (*((_QWORD *)this + 1) - v68) >> 1;
    *((_QWORD *)this + 2) = v68;
    v70 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 1) = v69;
    v71 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 3) = v67 >> 2;
    v72 = *((_QWORD *)this + 7);
    v73 = (v72 + v70) >> 3;
    *((_QWORD *)this + 6) = v73;
    *((_QWORD *)this + 7) = v72 >> 2;
    *((_QWORD *)this + 5) = (v71 - v73) >> 1;
  }
  if ( (*((_DWORD *)this + 41) & 1) == 0 )
  {
    do
    {
      HFDBASIS64::vParentError(this, &v91);
      v74 = *((_QWORD *)this + 16);
      if ( v91 > v74 )
        break;
      HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v91);
      if ( v91 > v74 )
        break;
      v75 = *((_QWORD *)this + 2);
      v76 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 3) *= 4LL;
      *((_QWORD *)this + 7) *= 4LL;
      *((int *)this + 41) >>= 1;
      v77 = v75 + 2 * v76;
      v78 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 1) = v77;
      v79 = v75;
      v80 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 2) = 8 * v79 - *((_QWORD *)this + 3);
      v81 = v80 + 2 * v78;
      v82 = 8 * v80 - *((_QWORD *)this + 7);
      *((_QWORD *)this + 5) = v81;
      LODWORD(v81) = *((_DWORD *)this + 41);
      *((_QWORD *)this + 6) = v82;
    }
    while ( (v81 & 1) == 0 );
  }
  return 1LL;
}
