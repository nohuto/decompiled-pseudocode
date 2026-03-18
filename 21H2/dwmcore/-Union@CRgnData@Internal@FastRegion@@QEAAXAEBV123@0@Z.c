/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180082B80
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180083254 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180083610 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18008376C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800D794C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  int *v4; // r13
  __int64 v5; // r8
  int *v6; // rbp
  int *v7; // rsi
  const struct FastRegion::Internal::CStripe *v8; // r14
  char *v9; // r12
  int *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  const struct FastRegion::Internal::CStripe *v14; // rsi
  char *v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  const struct FastRegion::Internal::CStripe *v22; // rdi
  const struct FastRegion::Internal::CStripe *v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r10
  _DWORD *v28; // r8
  char *v29; // rdx
  int v30; // r11d
  __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // r8
  int *v34; // r13
  int *i; // rdi
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  bool IsEqualToPrevious; // al
  int *v40; // r14
  int v41; // ecx
  const struct FastRegion::Internal::CStripe *v42; // r9
  const struct FastRegion::Internal::CStripe *v43; // rdx
  const struct FastRegion::Internal::CStripe *v44; // r10
  __int64 v45; // r10
  _DWORD *v46; // r10
  char *v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  _DWORD *v50; // rcx
  __int64 v51; // r8
  int *v52; // r11
  char *j; // rsi
  int *v54; // rcx
  const struct FastRegion::Internal::CStripe *v55; // r8
  const struct FastRegion::Internal::CStripe *v56; // rdx
  const struct FastRegion::Internal::CStripe *v57; // r8
  const struct FastRegion::Internal::CStripe *v58; // rax
  int v59; // eax
  int v60; // ecx
  const struct FastRegion::Internal::CStripe *v61; // r8
  const struct FastRegion::Internal::CStripe *v62; // rdx
  FastRegion::Internal::CStripe *v63; // rcx
  const struct FastRegion::Internal::CStripe *v64; // rdx
  int *v65; // r11
  int v66; // ecx
  bool v67; // al
  int *v68; // r11
  int v69; // ecx
  int *v70; // r11
  int *v71; // rcx
  char *v72; // [rsp+20h] [rbp-58h]
  int *v73; // [rsp+80h] [rbp+8h]

  v3 = *(int *)a2;
  v72 = (char *)a2 + 12;
  v4 = (int *)((char *)a3 + 12);
  v5 = *(int *)a3;
  v6 = (int *)((char *)this + 12);
  v7 = (int *)((char *)a2 + 12);
  v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v9 = (char *)a2 + 8 * v3 + 12;
  v11 = (int *)((char *)this + 12);
  v73 = &v4[2 * v5];
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v12 = *((_DWORD *)a2 + 3);
  if ( v12 < *v4 )
  {
    v13 = *((int *)this + 4);
    v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    *v6 = v12;
    v15 = (char *)v11 + v13;
    v16 = 0LL;
    v17 = *((int *)v14 - 1);
    v18 = (*((int *)v14 + 1) - (v17 - 8)) >> 2;
    if ( (int)v18 > 0 )
    {
      v19 = 0LL;
      do
      {
        *(_DWORD *)&v15[4 * v19] = *(_DWORD *)((char *)v14 + 4 * v19 + v17 - 8);
        ++v19;
      }
      while ( v19 < (int)v18 );
    }
    v6[3] = (_DWORD)v15 + 4 * v18 - ((_DWORD)v6 + 8);
    if ( v11 == v6 )
    {
      if ( (_DWORD)v15 + 4 * (_DWORD)v18 - (_DWORD)v11 != v6[1] )
        v11 = v6 + 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
    {
      v11 = v70;
    }
    v20 = *v4;
    v21 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 >= *v4 )
    {
LABEL_9:
      v22 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      v23 = v14;
      if ( v21 > v20 )
      {
        v23 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
      }
      else
      {
        v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
        if ( v14 == (const struct FastRegion::Internal::CStripe *)v9 )
        {
          v24 = v11[1];
          *v11 = v20;
          v25 = (int *)((char *)v11 + v24);
          v26 = (v4[3] - (__int64)v4[1] + 8) >> 2;
          v27 = (int)v26;
          if ( (int)v26 > 0 )
          {
            v28 = v25;
            v29 = (char *)((char *)v4 + v4[1] - (char *)v25);
            do
            {
              *v28 = *(_DWORD *)((char *)v28 + (_QWORD)v29);
              ++v28;
              --v27;
            }
            while ( v27 );
          }
          v30 = (_DWORD)v25 + 4 * v26 - ((_DWORD)v11 + 8);
          v11[3] = v30;
          v31 = v11[1];
          if ( v11 == v6 )
          {
            v34 = v73;
            if ( v30 - (_DWORD)v31 != -8 )
              v11 += 2;
            goto LABEL_20;
          }
          v32 = (int *)((char *)v11 + v31);
          v33 = (int)((v31 - (*(v11 - 1) - 8LL)) >> 2);
          if ( v33 == (v30 - v31 + 8) >> 2 )
          {
            if ( v33 <= 0 )
            {
LABEL_19:
              v34 = v73;
LABEL_20:
              for ( i = (int *)((char *)v22 + 8); i != v34; i += 2 )
              {
                FastRegion::Internal::CStripe::Copy(
                  (FastRegion::Internal::CStripe *)v11,
                  (const struct FastRegion::Internal::CStripe *)(i - 2));
                if ( v11 == v6 )
                {
                  if ( v11[3] - v11[1] != -8 )
                    v11 += 2;
                }
                else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
                {
                  v11 += 2;
                }
              }
              v36 = *(i - 2);
              goto LABEL_22;
            }
            while ( *v32 == *(_DWORD *)((char *)v32 + *(v11 - 1) - 8LL - v31) )
            {
              ++v16;
              ++v32;
              if ( v16 >= v33 )
                goto LABEL_19;
            }
          }
          v11 += 2;
          goto LABEL_19;
        }
      }
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v11,
        (const struct FastRegion::Internal::CStripe *)v4,
        v23);
      if ( v11 != v6 )
      {
        IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11);
        v34 = v73;
        goto LABEL_33;
      }
      v54 = v11 + 2;
      v34 = v73;
      if ( v11[3] - v11[1] != -8 )
        goto LABEL_49;
      goto LABEL_35;
    }
    while ( 1 )
    {
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      v58 = (const struct FastRegion::Internal::CStripe *)(v72 + 8);
      v72 += 8;
      if ( v14 == (const struct FastRegion::Internal::CStripe *)v9 )
        break;
      FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v11, v58);
      if ( v11 == v6 )
      {
        if ( v11[3] - v11[1] != -8 )
          v11 += 2;
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
      {
        v11 += 2;
      }
      v20 = *v4;
      v21 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 >= *v4 )
        goto LABEL_9;
    }
    v68 = v11 + 2;
    *v11 = *(_DWORD *)v58;
    v69 = v11[1] - 8;
    v11[3] = v69;
    if ( v11 == v6 )
    {
      if ( v69 - v11[1] == -8 )
      {
LABEL_99:
        v22 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v11,
          (const struct FastRegion::Internal::CStripe *)v4);
        if ( v11 == v6 )
        {
          v34 = v73;
          if ( v11[3] - v11[1] != -8 )
            v11 += 2;
        }
        else
        {
          v67 = FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11);
          v34 = v73;
LABEL_92:
          if ( !v67 )
            v11 += 2;
        }
        goto LABEL_20;
      }
    }
    else if ( FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
    {
      goto LABEL_99;
    }
    v11 = v68;
    goto LABEL_99;
  }
  v22 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
  if ( v12 <= *v4 )
  {
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Union(
      (FastRegion::Internal::CStripe *)v11,
      v8,
      (const struct FastRegion::Internal::CStripe *)v4);
    v54 = v6 + 2;
    v34 = v73;
    if ( (_DWORD)v6 + 8 + v6[3] - (_DWORD)v11 - v6[1] )
LABEL_49:
      v11 = v54;
LABEL_35:
    v40 = (int *)((char *)v14 - 8);
    while ( 1 )
    {
      v41 = *(_DWORD *)v22;
      v42 = v22;
      v36 = *(_DWORD *)v14;
      v43 = v14;
      v44 = v22;
      if ( *(_DWORD *)v14 < *(_DWORD *)v22 )
      {
        v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
        v40 += 2;
        if ( v14 == (const struct FastRegion::Internal::CStripe *)v9 )
        {
          v55 = v43;
          v56 = (const struct FastRegion::Internal::CStripe *)((char *)v22 - 8);
LABEL_90:
          FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v11, v56, v55);
          if ( v11 != v6 )
          {
            v67 = FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11);
            goto LABEL_92;
          }
          if ( v11[3] - v11[1] != -8 )
            v11 += 2;
          goto LABEL_20;
        }
        v57 = (const struct FastRegion::Internal::CStripe *)((char *)v22 - 8);
      }
      else
      {
        v22 = (const struct FastRegion::Internal::CStripe *)((char *)v22 + 8);
        if ( v36 <= v41 )
        {
          v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
          v40 += 2;
          if ( v14 == (const struct FastRegion::Internal::CStripe *)v9 )
          {
            if ( v22 == (const struct FastRegion::Internal::CStripe *)v34 )
              goto LABEL_22;
            v55 = v43;
            v56 = v44;
            goto LABEL_90;
          }
          v57 = v44;
          if ( v22 == (const struct FastRegion::Internal::CStripe *)v34 )
          {
            FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v11, v43, v44);
            if ( v11 != v6 )
              goto LABEL_87;
            v71 = v11 + 2;
            if ( v11[3] - v11[1] == -8 )
              goto LABEL_45;
LABEL_140:
            v11 = v71;
            goto LABEL_45;
          }
        }
        else
        {
          if ( v22 == (const struct FastRegion::Internal::CStripe *)v34 )
          {
            v45 = v11[1];
            *v11 = v41;
            v46 = (int *)((char *)v11 + v45);
            v47 = (char *)v40 + v40[1];
            v48 = ((__int64)v14 + *((int *)v14 + 1) - (_QWORD)v47) >> 2;
            v49 = (int)v48;
            if ( (int)v48 > 0 )
            {
              v50 = v46;
              v51 = v47 - (char *)v46;
              do
              {
                *v50 = *(_DWORD *)((char *)v50 + v51);
                ++v50;
                --v49;
              }
              while ( v49 );
            }
            v11[3] = (_DWORD)v46 + 4 * v48 - ((_DWORD)v11 + 8);
            if ( v11 == v6 )
            {
              if ( (_DWORD)v46 + 4 * (_DWORD)v48 - (_DWORD)v11 != v11[1] )
                v11 += 2;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
            {
              v11 = v52;
            }
            goto LABEL_45;
          }
          v57 = (const struct FastRegion::Internal::CStripe *)v40;
          v43 = v42;
        }
      }
      FastRegion::Internal::CStripe::Union((FastRegion::Internal::CStripe *)v11, v43, v57);
      if ( v11 == v6 )
      {
        if ( v11[3] - v11[1] != -8 )
          v11 += 2;
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
      {
        v11 += 2;
      }
    }
  }
  FastRegion::Internal::CStripe::Copy(
    (FastRegion::Internal::CStripe *)v11,
    (const struct FastRegion::Internal::CStripe *)v4);
  if ( v11 == v6 )
  {
    if ( (_DWORD)v6 + 8 + v6[3] - (_DWORD)v11 - v6[1] )
      v11 = v6 + 2;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
  {
    v11 += 2;
  }
  v59 = *(_DWORD *)v22;
  v60 = *v7;
  v34 = v73;
  if ( *v7 < *(_DWORD *)v22 )
  {
LABEL_74:
    v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v61 = (const struct FastRegion::Internal::CStripe *)((char *)v22 - 8);
    v62 = v8;
    v63 = (FastRegion::Internal::CStripe *)v11;
    goto LABEL_75;
  }
  while ( 1 )
  {
    v64 = v22;
    v61 = v22;
    v22 = (const struct FastRegion::Internal::CStripe *)((char *)v22 + 8);
    if ( v60 <= v59 )
    {
      v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
      v62 = v8;
      v63 = (FastRegion::Internal::CStripe *)v11;
      if ( v22 == (const struct FastRegion::Internal::CStripe *)v73 )
        goto LABEL_83;
LABEL_75:
      FastRegion::Internal::CStripe::Union(v63, v62, v61);
      if ( v11 != v6 )
      {
        IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11);
LABEL_33:
        if ( !IsEqualToPrevious )
          v11 += 2;
        goto LABEL_35;
      }
      v54 = v11 + 2;
      if ( v11[3] - v11[1] != -8 )
        goto LABEL_49;
      goto LABEL_35;
    }
    if ( v22 == (const struct FastRegion::Internal::CStripe *)v73 )
      break;
    FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v11, v64);
    if ( v11 == v6 )
    {
      if ( v11[3] - v11[1] != -8 )
        v11 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
    {
      v11 += 2;
    }
    v59 = *(_DWORD *)v22;
    v60 = *v7;
    if ( *v7 < *(_DWORD *)v22 )
      goto LABEL_74;
  }
  v65 = v11 + 2;
  *v11 = v59;
  v66 = v11[1] - 8;
  v11[3] = v66;
  if ( v11 == v6 )
  {
    if ( v66 + 8 - v11[1] )
LABEL_81:
      v11 = v65;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
  {
    goto LABEL_81;
  }
  v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  v62 = v8;
  v63 = (FastRegion::Internal::CStripe *)v11;
LABEL_83:
  FastRegion::Internal::CStripe::Copy(v63, v62);
  if ( v11 == v6 )
  {
    v71 = v11 + 2;
    if ( v11[3] - v11[1] != -8 )
      goto LABEL_140;
  }
  else
  {
LABEL_87:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
      v11 += 2;
  }
LABEL_45:
  for ( j = (char *)v14 + 8; j != v9; j += 8 )
  {
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v11,
      (const struct FastRegion::Internal::CStripe *)(j - 8));
    if ( v11 == v6 )
    {
      if ( v11[3] - v11[1] != -8 )
        v11 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
    {
      v11 += 2;
    }
  }
  v36 = *((_DWORD *)j - 2);
LABEL_22:
  *v11 = v36;
  if ( v11 != v6 && (char *)v11 + v11[1] != (char *)v11 + *(v11 - 1) - 8 )
    v11 += 2;
  *(_DWORD *)this = ((char *)v11 - (char *)this - 12) >> 3;
  v37 = *((_DWORD *)a2 + 1);
  if ( v37 >= *((_DWORD *)a3 + 1) )
    v37 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v37;
  v38 = *((_DWORD *)a2 + 2);
  if ( v38 <= *((_DWORD *)a3 + 2) )
    v38 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v38;
}
