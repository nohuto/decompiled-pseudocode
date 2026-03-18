/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A51EC
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800473E8 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800A4AB0 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800A48F0 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800A4954 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1800A55C8 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800A74EC (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  _DWORD *v4; // rdi
  __int64 v5; // r9
  const struct FastRegion::Internal::CStripe *v8; // r13
  FastRegion::Internal::CStripe *v9; // rbp
  FastRegion::Internal::CStripe *v10; // rbx
  char *v11; // rcx
  int v12; // eax
  char *v13; // rsi
  const struct FastRegion::Internal::CStripe *v14; // r14
  const struct FastRegion::Internal::CStripe *v15; // rdi
  const struct FastRegion::Internal::CStripe *v16; // r15
  int v17; // eax
  const struct FastRegion::Internal::CStripe *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  FastRegion::Internal::CStripe *v21; // rbx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  int v24; // ecx
  const struct FastRegion::Internal::CStripe *v25; // r8
  char *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  const struct FastRegion::Internal::CStripe *v30; // rdx
  const struct FastRegion::Internal::CStripe *v31; // r9
  int v32; // eax
  const struct FastRegion::Internal::CStripe *v33; // r9
  FastRegion::Internal::CStripe *v34; // rcx
  char *v35; // rcx
  int v36; // eax
  const struct FastRegion::Internal::CStripe *v37; // rsi
  bool v38; // zf
  const struct FastRegion::Internal::CStripe *v39; // rdx
  char *v40; // [rsp+50h] [rbp+8h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v9 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v10 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v11 = (char *)a3 + 8 * v5 + 12;
  v40 = v11;
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v12 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) < v12 )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    if ( v10 == v9 )
    {
      if ( (_DWORD)v9 + 8 + *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1) )
        v10 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    v28 = *(_DWORD *)v15;
    v29 = *((_DWORD *)a3 + 3);
    if ( *(_DWORD *)v15 < v29 )
    {
      v37 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      do
      {
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        v37 = (const struct FastRegion::Internal::CStripe *)((char *)v37 + 8);
        if ( v15 == v8 )
        {
          v17 = *(_DWORD *)v37;
          goto LABEL_9;
        }
        FastRegion::Internal::CStripe::Copy(v10, v37);
        if ( v10 == v9 )
        {
          if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
            v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        {
          v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
        }
        v28 = *(_DWORD *)v15;
        v29 = *((_DWORD *)a3 + 3);
      }
      while ( *(_DWORD *)v15 < v29 );
    }
    v13 = (char *)a3 + 20;
    if ( v28 <= v29 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v30 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      if ( v15 == v8 )
      {
        v17 = *(_DWORD *)v30;
        goto LABEL_9;
      }
    }
    else
    {
      v30 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
    FastRegion::Internal::CStripe::Subtract(
      v10,
      v30,
      (const struct FastRegion::Internal::CStripe *)(v13 - 8),
      (const struct FastRegion::Internal::CStripe *)(v13 - 8));
    if ( v10 != v9 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
      goto LABEL_5;
    }
    v35 = (char *)v10 + 8;
    v36 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) - (_DWORD)v10;
    goto LABEL_49;
  }
  v13 = (char *)a3 + 20;
  if ( *((_DWORD *)a2 + 3) > v12 )
  {
    while ( 1 )
    {
      v32 = *(_DWORD *)v13;
      if ( *v4 < *(_DWORD *)v13 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v33 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v34 = v10;
        goto LABEL_48;
      }
      v13 += 8;
      if ( *v4 <= v32 )
        break;
      if ( v13 == v11 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v39 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v34 = v10;
        goto LABEL_67;
      }
    }
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    v38 = v13 == v11;
    v34 = v10;
    v33 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    if ( v38 )
    {
      v39 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_67:
      FastRegion::Internal::CStripe::Copy(v34, v39);
      v26 = (char *)v9 + 8;
      v27 = *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1);
      goto LABEL_26;
    }
LABEL_48:
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    FastRegion::Internal::CStripe::Subtract(
      v34,
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
      (const struct FastRegion::Internal::CStripe *)(v13 - 8),
      v33);
    v35 = (char *)v9 + 8;
    v36 = *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1);
LABEL_49:
    if ( (_DWORD)v35 + v36 )
      v10 = (FastRegion::Internal::CStripe *)v35;
    goto LABEL_5;
  }
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Subtract(
    v10,
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( (_DWORD)v9 + 8 + *((_DWORD *)v9 + 3) - (_DWORD)v10 - *((_DWORD *)v9 + 1) )
    v10 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
LABEL_5:
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
  while ( 1 )
  {
    v17 = *(_DWORD *)v15;
    v18 = v15;
    v19 = *(_DWORD *)v13;
    if ( *(_DWORD *)v15 < *(_DWORD *)v13 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v15 == v8 )
        goto LABEL_9;
      goto LABEL_40;
    }
    v13 += 8;
    if ( v17 <= v19 )
      break;
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v18 = v16;
    v25 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    if ( v13 == v40 )
      goto LABEL_22;
    v31 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_41:
    FastRegion::Internal::CStripe::Subtract(v10, v18, v25, v31);
    if ( v10 == v9 )
    {
      if ( *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) != -8 )
        v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
  if ( v15 == v8 )
    goto LABEL_9;
  v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
  if ( v13 != v40 )
  {
LABEL_40:
    v31 = v18;
    v25 = v14;
    goto LABEL_41;
  }
  v25 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_22:
  FastRegion::Internal::CStripe::Copy(v10, v18, v25);
  while ( 1 )
  {
    if ( v10 == v9 )
    {
      v26 = (char *)v10 + 8;
      v27 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) - (_DWORD)v10;
LABEL_26:
      if ( (_DWORD)v26 + v27 )
        v10 = (FastRegion::Internal::CStripe *)v26;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v10) )
    {
      v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v15 == v8 )
      break;
    FastRegion::Internal::CStripe::Copy(v10, (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
  }
  v17 = *((_DWORD *)v15 - 2);
LABEL_9:
  *(_DWORD *)v10 = v17;
  if ( v10 != v9 && (char *)v10 + *((int *)v10 + 1) != (char *)v10 + *((int *)v10 - 1) - 8 )
    v10 = (FastRegion::Internal::CStripe *)((char *)v10 + 8);
  v20 = (v10 - this - 12) >> 3;
  *(_DWORD *)this = v20;
  if ( (_DWORD)v20 )
  {
    v21 = (FastRegion::Internal::CStripe *)((char *)v10 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v22 = (_DWORD *)((char *)v21 + *((int *)v21 + 1));
    while ( 1 )
    {
      v21 = (FastRegion::Internal::CStripe *)((char *)v21 - 8);
      if ( v21 < v9 )
        break;
      v23 = v22;
      v22 = (_DWORD *)((char *)v21 + *((int *)v21 + 1));
      if ( v22 != v23 )
      {
        if ( *((_DWORD *)this + 1) > *v22 )
          *((_DWORD *)this + 1) = *v22;
        v24 = *(v23 - 1);
        if ( *((_DWORD *)this + 2) < v24 )
          *((_DWORD *)this + 2) = v24;
      }
    }
  }
}
