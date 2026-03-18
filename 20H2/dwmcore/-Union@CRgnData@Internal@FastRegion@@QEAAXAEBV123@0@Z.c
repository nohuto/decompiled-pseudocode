/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A3C10
 * Callers:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800A3720 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800A4AB0 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800A4738 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800A48F0 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800A4954 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800A74EC (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  int *v4; // rbp
  __int64 v5; // r10
  _DWORD *v6; // rsi
  int *v7; // rdi
  __int64 v8; // r12
  const struct FastRegion::Internal::CStripe *v9; // r15
  const struct FastRegion::Internal::CStripe *v10; // r14
  char *v11; // r13
  int *v12; // rbx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  const struct FastRegion::Internal::CStripe *v16; // rdi
  char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  char *v23; // rsi
  const struct FastRegion::Internal::CStripe *v24; // r8
  int *v25; // r14
  __int64 v26; // r9
  _DWORD *v27; // r9
  char *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r10
  _DWORD *v31; // r8
  __int64 v32; // rdx
  int v33; // r11d
  __int64 v34; // rax
  _DWORD *v35; // rcx
  __int64 v36; // r8
  char *j; // rsi
  int v38; // eax
  char *i; // rdi
  int v40; // ecx
  int v41; // ecx
  _DWORD *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  int *v45; // r15
  int v46; // ecx
  const struct FastRegion::Internal::CStripe *v47; // r9
  __int64 v48; // r9
  _DWORD *v49; // r9
  char *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r10
  _DWORD *v53; // r8
  __int64 v54; // rdx
  int v55; // r11d
  __int64 v56; // rax
  _DWORD *v57; // rdx
  __int64 v58; // r8
  int *v59; // rcx
  int v60; // eax
  __int64 v61; // rax
  const struct FastRegion::Internal::CStripe *v62; // r10
  __int64 v63; // r9
  __int64 v64; // rdx
  _DWORD *v65; // rcx
  int *v66; // r11
  int v67; // ecx
  const struct FastRegion::Internal::CStripe *v68; // r8
  const struct FastRegion::Internal::CStripe *v69; // rdx
  int v70; // eax
  int v71; // ecx
  const struct FastRegion::Internal::CStripe *v72; // rdx
  FastRegion::Internal::CStripe *v73; // rcx
  int *v74; // r11
  int v75; // ecx
  int v76; // ecx
  int *v77; // r11
  int v78; // ecx
  int *v79; // r11
  int *v80; // rcx
  char *v81; // [rsp+20h] [rbp-58h]

  v3 = *(int *)a3;
  v4 = (int *)((char *)this + 12);
  v5 = *(int *)a2;
  v6 = (_DWORD *)((char *)a3 + 12);
  v7 = (int *)((char *)a2 + 12);
  v8 = 0LL;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v81 = (char *)a3 + 8 * v3 + 12;
  v11 = (char *)a2 + 8 * v5 + 12;
  v12 = (int *)((char *)this + 12);
  *((_DWORD *)this + 4) = 8 * (v3 + v5);
  v13 = *((_DWORD *)a3 + 3);
  v14 = *((_DWORD *)a2 + 3);
  if ( v14 >= v13 )
  {
    v23 = (char *)a3 + 20;
    if ( v14 <= v13 )
    {
      v25 = (int *)((char *)a3 + 12);
      v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v12,
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
        (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
      v59 = v4 + 2;
      if ( (_DWORD)v4 + 8 + v4[3] - v4[1] - (_DWORD)v12 )
LABEL_52:
        v12 = v59;
LABEL_37:
      v45 = (int *)((char *)v16 - 8);
      while ( 1 )
      {
        v46 = *(_DWORD *)v23;
        v47 = v16;
        v38 = *(_DWORD *)v16;
        if ( *(_DWORD *)v16 < *(_DWORD *)v23 )
          break;
        v23 += 8;
        if ( v38 <= v46 )
        {
          v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
          v45 += 2;
          if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
          {
            if ( v23 == v81 )
              goto LABEL_23;
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              (const struct FastRegion::Internal::CStripe *)(v23 - 8),
              v47);
            if ( v12 == v4 )
            {
              if ( v12[3] - v12[1] != -8 )
                v12 += 2;
              goto LABEL_19;
            }
            if ( FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
              goto LABEL_19;
LABEL_96:
            v12 += 2;
            goto LABEL_19;
          }
          v25 = (int *)(v23 - 8);
          if ( v23 == v81 )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v12,
              v47,
              (const struct FastRegion::Internal::CStripe *)(v23 - 8));
            if ( v12 != v4 )
              goto LABEL_91;
            v80 = v12 + 2;
            if ( v12[3] - v12[1] != -8 )
              goto LABEL_151;
            goto LABEL_21;
          }
          goto LABEL_68;
        }
        v25 = (int *)(v23 - 8);
        if ( v23 == v81 )
        {
          v48 = v12[1];
          *v12 = *v25;
          v49 = (int *)((char *)v12 + v48);
          v50 = (char *)v45 + v45[1];
          v51 = ((__int64)v16 + *((int *)v16 + 1) - (_QWORD)v50) >> 2;
          v52 = (int)v51;
          if ( (int)v51 > 0 )
          {
            v53 = v49;
            v54 = v50 - (char *)v49;
            do
            {
              *v53 = *(_DWORD *)((char *)v53 + v54);
              ++v53;
              --v52;
            }
            while ( v52 );
          }
          v55 = (_DWORD)v49 + 4 * v51 - ((_DWORD)v12 + 8);
          v12[3] = v55;
          v56 = v12[1];
          if ( v12 == v4 )
          {
            if ( v55 - (_DWORD)v56 == -8 )
              goto LABEL_21;
          }
          else
          {
            v57 = (int *)((char *)v12 + *(v12 - 1) - 8);
            v58 = (int)((v56 - (*(v12 - 1) - 8LL)) >> 2);
            if ( v58 == (v55 - v56 + 8) >> 2 )
            {
              if ( v58 <= 0 )
                goto LABEL_21;
              while ( *(_DWORD *)((char *)v57 + v56 - (*(v12 - 1) - 8LL)) == *v57 )
              {
                ++v8;
                ++v57;
                if ( v8 >= v58 )
                  goto LABEL_21;
              }
            }
          }
          v12 += 2;
          goto LABEL_21;
        }
        v68 = (const struct FastRegion::Internal::CStripe *)v45;
        v69 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
LABEL_70:
        FastRegion::Internal::CStripe::Union((FastRegion::Internal::CStripe *)v12, v69, v68);
        if ( v12 == v4 )
        {
          if ( v12[3] - v12[1] != -8 )
            v12 += 2;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
        {
          v12 += 2;
        }
      }
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      v45 += 2;
      if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
      {
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v12,
          (const struct FastRegion::Internal::CStripe *)v25,
          v47);
        goto LABEL_94;
      }
LABEL_68:
      v68 = (const struct FastRegion::Internal::CStripe *)v25;
      v69 = v47;
      goto LABEL_70;
    }
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v12,
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( v12 == v4 )
    {
      if ( (_DWORD)v4 + 8 + v4[3] - v4[1] - (_DWORD)v12 )
        v12 = v4 + 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
    {
      v12 += 2;
    }
    v70 = *(_DWORD *)v23;
    v71 = *v7;
    if ( *v7 < *(_DWORD *)v23 )
    {
      v25 = (int *)(v23 - 8);
      v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
      v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
      v72 = v9;
      goto LABEL_79;
    }
    while ( 1 )
    {
      v23 += 8;
      if ( v71 <= v70 )
        break;
      if ( v23 == v81 )
      {
        v74 = v12 + 2;
        v75 = v12[1] - ((_DWORD)v12 + 8);
        *v12 = *((_DWORD *)v23 - 2);
        v76 = (_DWORD)v12 + v75;
        v12[3] = v76;
        if ( v12 == v4 )
        {
          if ( v76 - v12[1] != -8 )
LABEL_88:
            v12 = v74;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
        {
          goto LABEL_88;
        }
        v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
        v72 = v9;
        v73 = (FastRegion::Internal::CStripe *)v12;
LABEL_90:
        FastRegion::Internal::CStripe::Copy(v73, v72);
        if ( v12 == v4 )
        {
          v80 = v12 + 2;
          if ( v12[3] - v12[1] != -8 )
LABEL_151:
            v12 = v80;
        }
        else
        {
LABEL_91:
          if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
            v12 += 2;
        }
LABEL_21:
        for ( i = (char *)v16 + 8; i != v11; i += 8 )
        {
          FastRegion::Internal::CStripe::Copy(
            (FastRegion::Internal::CStripe *)v12,
            (const struct FastRegion::Internal::CStripe *)(i - 8));
          if ( v12 == v4 )
          {
            if ( v12[3] - v12[1] != -8 )
              v12 += 2;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
          {
            v12 += 2;
          }
        }
        v38 = *((_DWORD *)i - 2);
        goto LABEL_23;
      }
      FastRegion::Internal::CStripe::Copy(
        (FastRegion::Internal::CStripe *)v12,
        (const struct FastRegion::Internal::CStripe *)(v23 - 8));
      if ( v12 == v4 )
      {
        if ( v12[3] - v12[1] != -8 )
          v12 += 2;
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
      {
        v12 += 2;
      }
      v70 = *(_DWORD *)v23;
      v71 = *v7;
      if ( *v7 < *(_DWORD *)v23 )
      {
        v25 = (int *)(v23 - 8);
        v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
        v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
        v72 = v9;
        goto LABEL_79;
      }
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v73 = (FastRegion::Internal::CStripe *)v12;
    v72 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
    if ( v23 == v81 )
      goto LABEL_90;
    v25 = (int *)(v23 - 8);
    v24 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
LABEL_80:
    FastRegion::Internal::CStripe::Union(v73, v72, v24);
    if ( v12 != v4 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
        v12 += 2;
      goto LABEL_37;
    }
    v59 = v12 + 2;
    if ( v12[3] - v12[1] != -8 )
      goto LABEL_52;
    goto LABEL_37;
  }
  v15 = v4[1];
  v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  *v4 = v14;
  v17 = (char *)v12 + v15;
  v18 = *((int *)v16 - 1);
  v19 = (*((int *)v16 + 1) - (v18 - 8)) >> 2;
  if ( (int)v19 > 0 )
  {
    v20 = 0LL;
    do
    {
      *(_DWORD *)&v17[4 * v20] = *(_DWORD *)((char *)v16 + 4 * v20 + v18 - 8);
      ++v20;
    }
    while ( v20 < (int)v19 );
  }
  v4[3] = (_DWORD)v17 + 4 * v19 - ((_DWORD)v4 + 8);
  if ( v12 == v4 )
  {
    if ( (_DWORD)v17 + 4 * (_DWORD)v19 - v4[1] != (_DWORD)v12 )
      v12 = v4 + 2;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
  {
    v12 = v79;
  }
  v21 = *v6;
  v22 = *(_DWORD *)v16;
  if ( *(_DWORD *)v16 >= *v6 )
  {
LABEL_9:
    v23 = (char *)(v6 + 2);
    v24 = v16;
    v25 = (int *)(v23 - 8);
    if ( v22 > v21 )
    {
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v12,
        (const struct FastRegion::Internal::CStripe *)(v23 - 8),
        (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8));
      if ( v12 == v4 )
      {
        v59 = v12 + 2;
        if ( v12[3] - v12[1] == -8 )
          goto LABEL_37;
        goto LABEL_52;
      }
      v42 = (int *)((char *)v12 + v12[1]);
      v43 = (int)((v12[1] - (*(v12 - 1) - 8LL)) >> 2);
      if ( v43 == (v12[3] - (__int64)v12[1] + 8) >> 2 )
      {
        if ( v43 <= 0 )
          goto LABEL_37;
        v44 = 0LL;
        while ( *v42 == *(_DWORD *)((char *)v42 + *(v12 - 1) - 8LL - v12[1]) )
        {
          ++v44;
          ++v42;
          if ( v44 >= v43 )
            goto LABEL_37;
        }
      }
      v12 += 2;
      goto LABEL_37;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
    {
      v26 = v12[1];
      *v12 = *v25;
      v27 = (int *)((char *)v12 + v26);
      v28 = (char *)v25 + v25[1];
      v29 = (__int64)&v23[*((int *)v23 + 1) - (_QWORD)v28] >> 2;
      v30 = (int)v29;
      if ( (int)v29 > 0 )
      {
        v31 = v27;
        v32 = v28 - (char *)v27;
        do
        {
          *v31 = *(_DWORD *)((char *)v31 + v32);
          ++v31;
          --v30;
        }
        while ( v30 );
      }
      v33 = (_DWORD)v27 + 4 * v29 - ((_DWORD)v12 + 8);
      v12[3] = v33;
      v34 = v12[1];
      if ( v12 == v4 )
      {
        if ( v33 - (_DWORD)v34 == -8 )
          goto LABEL_19;
      }
      else
      {
        v35 = (int *)((char *)v12 + v34);
        v36 = (int)((v34 - (*(v12 - 1) - 8LL)) >> 2);
        if ( v36 == (v33 - v34 + 8) >> 2 )
        {
          if ( v36 <= 0 )
            goto LABEL_19;
          while ( *v35 == *(_DWORD *)((char *)v35 + *(v12 - 1) - 8LL - v34) )
          {
            ++v8;
            ++v35;
            if ( v8 >= v36 )
              goto LABEL_19;
          }
        }
      }
      v12 += 2;
      goto LABEL_19;
    }
    v72 = (const struct FastRegion::Internal::CStripe *)(v23 - 8);
LABEL_79:
    v73 = (FastRegion::Internal::CStripe *)v12;
    goto LABEL_80;
  }
  while ( 1 )
  {
    v60 = *(_DWORD *)v16;
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    *v12 = v60;
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v11 )
      break;
    v61 = *((int *)v16 - 1);
    v62 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + v12[1]);
    v63 = (*((int *)v16 + 1) - (v61 - 8)) >> 2;
    v64 = (int)v63;
    if ( (int)v63 > 0 )
    {
      v65 = (int *)((char *)v12 + v12[1]);
      do
      {
        *v65 = *(_DWORD *)((char *)v65 + (const struct FastRegion::Internal::CStripe *)((char *)v16 + v61 - 8) - v62);
        ++v65;
        --v64;
      }
      while ( v64 );
    }
    v66 = v12 + 2;
    v67 = (_DWORD)v62 + 4 * v63 - ((_DWORD)v12 + 8);
    v12[3] = v67;
    if ( v12 == v4 )
    {
      if ( v67 - v12[1] == -8 )
        goto LABEL_65;
LABEL_64:
      v12 = v66;
      goto LABEL_65;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
      goto LABEL_64;
LABEL_65:
    v21 = *v6;
    v22 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 >= *v6 )
      goto LABEL_9;
  }
  v77 = v12 + 2;
  v78 = v12[1] - 8;
  v12[3] = v78;
  if ( v12 == v4 )
  {
    if ( v78 - v12[1] != -8 )
LABEL_109:
      v12 = v77;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
  {
    goto LABEL_109;
  }
  v23 = (char *)(v6 + 2);
  FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v12, v10);
LABEL_94:
  if ( v12 == v4 )
  {
    if ( v12[3] - v12[1] != -8 )
      v12 += 2;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
  {
    goto LABEL_96;
  }
LABEL_19:
  for ( j = v23 + 8; j != v81; j += 8 )
  {
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v12,
      (const struct FastRegion::Internal::CStripe *)(j - 8));
    if ( v12 == v4 )
    {
      if ( v12[3] - v12[1] != -8 )
        v12 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
    {
      v12 += 2;
    }
  }
  v38 = *((_DWORD *)j - 2);
LABEL_23:
  *v12 = v38;
  if ( v12 != v4 && (char *)v12 + v12[1] != (char *)v12 + *(v12 - 1) - 8 )
    v12 += 2;
  *(_DWORD *)this = ((char *)v12 - (char *)this - 12) >> 3;
  v40 = *((_DWORD *)a2 + 1);
  if ( v40 >= *((_DWORD *)a3 + 1) )
    v40 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v40;
  v41 = *((_DWORD *)a2 + 2);
  if ( v41 <= *((_DWORD *)a3 + 2) )
    v41 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v41;
}
