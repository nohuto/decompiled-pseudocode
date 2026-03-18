/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800838C0
 * Callers:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180083254 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18008376C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x18008407C (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800D794C (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  const struct FastRegion::Internal::CStripe *v4; // rsi
  const struct FastRegion::Internal::CStripe *v5; // r14
  __int64 v7; // r8
  FastRegion::Internal::CStripe *v8; // rbp
  _DWORD *v9; // rdi
  const struct FastRegion::Internal::CStripe *v10; // r10
  const struct FastRegion::Internal::CStripe *v11; // r12
  FastRegion::Internal::CStripe *v12; // rbx
  const struct FastRegion::Internal::CStripe *v13; // r13
  const struct FastRegion::Internal::CStripe *v14; // rsi
  const struct FastRegion::Internal::CStripe *v15; // rdi
  const struct FastRegion::Internal::CStripe *v16; // r14
  int v17; // eax
  const struct FastRegion::Internal::CStripe *v18; // rdx
  int v19; // ecx
  const struct FastRegion::Internal::CStripe *v20; // r8
  __int64 v21; // rax
  FastRegion::Internal::CStripe *v22; // rbx
  _DWORD *v23; // rax
  _DWORD *v24; // rdx
  int v25; // ecx
  char *v26; // rcx
  int v27; // eax
  const struct FastRegion::Internal::CStripe *v28; // rdx
  int v29; // eax
  const struct FastRegion::Internal::CStripe *v30; // r8
  const struct FastRegion::Internal::CStripe *v31; // rdx
  FastRegion::Internal::CStripe *v32; // rcx
  char *v33; // rcx
  int v34; // eax
  const struct FastRegion::Internal::CStripe *v35; // r9
  char *v36; // rcx
  int v37; // eax

  v3 = *(int *)a2;
  v4 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v5 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v7 = *(int *)a3;
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v9 = (_DWORD *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v12 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v13 = (const struct FastRegion::Internal::CStripe *)((char *)v5 + 8 * v7);
  *((_DWORD *)this + 4) = 8 * (v7 + v3);
  if ( *((_DWORD *)a2 + 3) < *(_DWORD *)v5 )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CRgnData *)((char *)this + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    if ( v12 != v8 )
      goto LABEL_58;
    v26 = (char *)v8 + 8;
    v27 = *((_DWORD *)v8 + 3) - (_DWORD)v12 - *((_DWORD *)v8 + 1);
LABEL_31:
    if ( (_DWORD)v26 + v27 )
      v12 = (FastRegion::Internal::CStripe *)v26;
    while ( 1 )
    {
      v17 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 >= *(_DWORD *)v5 )
        break;
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v4 = (const struct FastRegion::Internal::CStripe *)((char *)v4 + 8);
      if ( v15 == v11 )
      {
        v17 = *(_DWORD *)v4;
        goto LABEL_17;
      }
      FastRegion::Internal::CStripe::Copy(v12, v4);
      if ( v12 == v8 )
      {
        v26 = (char *)v12 + 8;
        v27 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) - (_DWORD)v12;
        goto LABEL_31;
      }
LABEL_58:
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
        v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v5 + 8);
    v28 = v15;
    if ( v17 > *(_DWORD *)v5 )
    {
      v28 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    else
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v11 )
        goto LABEL_17;
    }
    FastRegion::Internal::CStripe::Subtract(v12, v28, v5, v5);
    if ( v12 != v8 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
        v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
      goto LABEL_5;
    }
    v36 = (char *)v12 + 8;
    v37 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) - (_DWORD)v12;
    goto LABEL_62;
  }
  v14 = (const struct FastRegion::Internal::CStripe *)((char *)v5 + 8);
  if ( *((_DWORD *)a2 + 3) > *(_DWORD *)v5 )
  {
    while ( 1 )
    {
      v29 = *(_DWORD *)v14;
      if ( *v9 < *(_DWORD *)v14 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v30 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
        v31 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v32 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
        goto LABEL_61;
      }
      v30 = v14;
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      if ( *v9 <= v29 )
        break;
      if ( v14 == v13 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v31 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v32 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
LABEL_43:
        FastRegion::Internal::CStripe::Copy(v32, v31);
        v33 = (char *)v8 + 8;
        v34 = *((_DWORD *)v8 + 3) - (_DWORD)v12 - *((_DWORD *)v8 + 1);
        goto LABEL_44;
      }
    }
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    v31 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    v32 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
    if ( v14 == v13 )
      goto LABEL_43;
LABEL_61:
    FastRegion::Internal::CStripe::Subtract(v32, v31, v30, v10);
    v36 = (char *)v8 + 8;
    v37 = *((_DWORD *)v8 + 3) - (_DWORD)v12 - *((_DWORD *)v8 + 1);
LABEL_62:
    if ( (_DWORD)v36 + v37 )
      v12 = (FastRegion::Internal::CStripe *)v36;
    goto LABEL_5;
  }
  v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Subtract(
    (FastRegion::Internal::CRgnData *)((char *)this + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    v5,
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( (_DWORD)v8 + 8 + *((_DWORD *)v8 + 3) - (_DWORD)v12 - *((_DWORD *)v8 + 1) )
    v12 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
LABEL_5:
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
  while ( 1 )
  {
    v17 = *(_DWORD *)v15;
    v18 = v15;
    v19 = *(_DWORD *)v14;
    v20 = v14;
    if ( *(_DWORD *)v15 < *(_DWORD *)v14 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v15 == v11 )
        goto LABEL_17;
      v20 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
      goto LABEL_52;
    }
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v17 <= v19 )
      break;
    v18 = v16;
    if ( v14 == v13 )
      goto LABEL_38;
    v35 = v20;
LABEL_53:
    FastRegion::Internal::CStripe::Subtract(v12, v18, v20, v35);
    if ( v12 == v8 )
    {
      if ( *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) != -8 )
        v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
    {
      v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
  if ( v15 == v11 )
    goto LABEL_17;
  if ( v14 != v13 )
  {
LABEL_52:
    v35 = v18;
    goto LABEL_53;
  }
LABEL_38:
  FastRegion::Internal::CStripe::Copy(v12, v18, v20);
  while ( 1 )
  {
    if ( v12 == v8 )
    {
      v33 = (char *)v12 + 8;
      v34 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) - (_DWORD)v12;
LABEL_44:
      if ( (_DWORD)v33 + v34 )
        v12 = (FastRegion::Internal::CStripe *)v33;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v12) )
    {
      v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v15 == v11 )
      break;
    FastRegion::Internal::CStripe::Copy(v12, (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
  }
  v17 = *((_DWORD *)v15 - 2);
LABEL_17:
  *(_DWORD *)v12 = v17;
  if ( v12 != v8 && (char *)v12 + *((int *)v12 + 1) != (char *)v12 + *((int *)v12 - 1) - 8 )
    v12 = (FastRegion::Internal::CStripe *)((char *)v12 + 8);
  v21 = (v12 - this - 12) >> 3;
  *(_DWORD *)this = v21;
  if ( (_DWORD)v21 )
  {
    v22 = (FastRegion::Internal::CStripe *)((char *)v12 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v23 = (_DWORD *)((char *)v22 + *((int *)v22 + 1));
    while ( 1 )
    {
      v22 = (FastRegion::Internal::CStripe *)((char *)v22 - 8);
      if ( v22 < v8 )
        break;
      v24 = v23;
      v23 = (_DWORD *)((char *)v22 + *((int *)v22 + 1));
      if ( v23 != v24 )
      {
        if ( *((_DWORD *)this + 1) > *v23 )
          *((_DWORD *)this + 1) = *v23;
        v25 = *(v24 - 1);
        if ( *((_DWORD *)this + 2) < v25 )
          *((_DWORD *)this + 2) = v25;
      }
    }
  }
}
