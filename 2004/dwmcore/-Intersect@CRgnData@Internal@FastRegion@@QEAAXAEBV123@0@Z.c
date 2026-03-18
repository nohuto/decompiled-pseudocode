/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180043F98
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041B60 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180042F10 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800441D8 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  FastRegion::Internal::CStripe *v4; // rbp
  _DWORD *v5; // rdi
  __int64 v7; // rdx
  const struct FastRegion::Internal::CStripe *v8; // r10
  const struct FastRegion::Internal::CStripe *v9; // r12
  FastRegion::Internal::CStripe *v10; // rbx
  char *v11; // r13
  int v12; // ecx
  char *v13; // rsi
  int v14; // eax
  const struct FastRegion::Internal::CStripe *v15; // rdi
  const struct FastRegion::Internal::CStripe *v16; // r14
  const struct FastRegion::Internal::CStripe *v17; // rdx
  const struct FastRegion::Internal::CStripe *v18; // r8
  char *v19; // rcx
  int v20; // eax
  int v21; // eax
  const struct FastRegion::Internal::CStripe *v22; // rdx
  int v23; // ecx
  __int64 v24; // rax
  FastRegion::Internal::CStripe *v25; // rbx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  int v28; // ecx
  const struct FastRegion::Internal::CStripe *v29; // r8
  const struct FastRegion::Internal::CStripe *v30; // rdx
  const struct FastRegion::Internal::CStripe *v31; // rdx

  v3 = *(int *)a2;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = (_DWORD *)((char *)a2 + 12);
  v7 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CStripe *)v5;
  v9 = (const struct FastRegion::Internal::CStripe *)&v5[2 * v3];
  v10 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v11 = (char *)a3 + 8 * v7 + 12;
  *((_DWORD *)this + 4) = 8 * (v7 + v3);
  v12 = *((_DWORD *)a3 + 3);
  if ( *v5 < v12 )
  {
    v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    while ( *(_DWORD *)v15 < v12 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v9 )
        goto LABEL_14;
    }
    v31 = v15;
    v13 = (char *)a3 + 20;
    if ( *(_DWORD *)v15 <= v12 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v9 )
        goto LABEL_14;
      v18 = v31;
    }
    else
    {
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v17 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_6:
    FastRegion::Internal::CStripe::Intersect(v10, v17, v18);
    v19 = (char *)v4 + 8;
    v20 = *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1);
    goto LABEL_7;
  }
  v13 = (char *)a3 + 20;
  if ( *v5 > v12 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)v13;
      if ( *v5 < *(_DWORD *)v13 )
      {
        v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
        goto LABEL_5;
      }
      v13 += 8;
      if ( *v5 <= v14 )
        break;
      if ( v13 == v11 )
        goto LABEL_14;
    }
    v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    if ( v13 == v11 )
      goto LABEL_14;
LABEL_5:
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v17 = v8;
    v18 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    goto LABEL_6;
  }
  v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v30 = (const struct FastRegion::Internal::CStripe *)v5;
  v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
  FastRegion::Internal::CStripe::Intersect(v10, v30, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  if ( (_DWORD)v4 + 8 + *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) - (_DWORD)v10 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
  while ( 1 )
  {
    v21 = *(_DWORD *)v15;
    v22 = v15;
    v23 = *(_DWORD *)v13;
    if ( *(_DWORD *)v15 < *(_DWORD *)v13 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v9 )
        goto LABEL_11;
LABEL_25:
      v29 = v16;
      goto LABEL_26;
    }
    v13 += 8;
    if ( v21 <= v23 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v9 || v13 == v11 )
        goto LABEL_11;
      v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
      goto LABEL_25;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    if ( v13 == v11 )
      break;
    v29 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    v22 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_26:
    FastRegion::Internal::CStripe::Intersect(v10, v22, v29);
    if ( v10 == v4 )
    {
      v19 = (char *)v10 + 8;
      v20 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1);
LABEL_7:
      if ( (_DWORD)v19 + v20 - (_DWORD)v10 )
        v10 = (FastRegion::Internal::CStripe *)v19;
      continue;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
  }
  v21 = *(_DWORD *)v16;
LABEL_11:
  *(_DWORD *)v10 = v21;
  if ( v10 != v4 && (char *)v10 + *((int *)v10 + 1) != (char *)v10 + *((int *)v10 - 1) - 8 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
LABEL_14:
  v24 = (v10 - this - 12) >> 3;
  *(_DWORD *)this = v24;
  if ( (_DWORD)v24 )
  {
    v25 = (FastRegion::Internal::CStripe *)((char *)v10 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v26 = (_DWORD *)((char *)v25 + *((int *)v25 + 1));
    while ( 1 )
    {
      v25 = (FastRegion::Internal::CStripe *)((char *)v25 - 8);
      if ( v25 < v4 )
        break;
      v27 = v26;
      v26 = (_DWORD *)((char *)v25 + *((int *)v25 + 1));
      if ( v26 != v27 )
      {
        if ( *((_DWORD *)this + 1) > *v26 )
          *((_DWORD *)this + 1) = *v26;
        v28 = *(v27 - 1);
        if ( *((_DWORD *)this + 2) < v28 )
          *((_DWORD *)this + 2) = v28;
      }
    }
  }
}
