/*
 * XREFs of std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FDC2C
 * Callers:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FDFAC (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 * Callees:
 *     std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1801FDBD0 (std--_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 **__fastcall std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 **a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // r15
  __int64 *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // r9
  __int64 v20; // r10
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 *v23; // r8
  __int64 *v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // rax
  bool v27; // zf
  __int64 *v28; // rcx
  unsigned int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 **result; // rax

  v3 = (__int64 *)(a3 - 8);
  v7 = a2;
  v8 = &a2[(__int64)(a3 - (_QWORD)a2) >> 4];
  v9 = (__int64)(a3 - 8 - (_QWORD)a2) >> 3;
  if ( v9 <= 40 )
  {
    v16 = (__int64 *)(a3 - 8);
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = 16 * v10;
    v12 = &a2[v10];
    std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a2, v12, &a2[2 * v10]);
    std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
      (__int64 *)((char *)v8 - v13),
      v8,
      (__int64 *)((char *)v8 + v13));
    std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
      &v3[v11 / 0xFFFFFFFFFFFFFFF8uLL],
      (__int64 *)((char *)v3 - v14),
      v3);
    v16 = v15;
    v7 = v12;
  }
  std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v7, v8, v16);
  v17 = v8 + 1;
  if ( a2 < v8 )
  {
    v18 = *v8;
    do
    {
      v19 = v8 - 1;
      v20 = *(v8 - 1);
      v21 = *(_DWORD *)(v20 + 264);
      if ( v21 < *(_DWORD *)(v18 + 264) )
        break;
      if ( v21 > *(_DWORD *)(v18 + 264) )
        break;
      --v8;
      v18 = v20;
    }
    while ( a2 < v19 );
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v22 = *(_DWORD *)(*v8 + 264);
    do
    {
      if ( *(_DWORD *)(*v17 + 264) < v22 )
        break;
      if ( *(_DWORD *)(*v17 + 264) > v22 )
        break;
      ++v17;
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v23 = v17;
  v24 = v8;
  while ( 1 )
  {
    while ( (unsigned __int64)v23 < a3 )
    {
      v25 = *(_DWORD *)(*v8 + 264);
      if ( v25 < *(_DWORD *)(*v23 + 264) )
        goto LABEL_20;
      if ( v25 > *(_DWORD *)(*v23 + 264) )
        break;
      if ( v17 != v23 )
      {
        v26 = *v17;
        *v17 = *v23;
        *v23 = v26;
      }
      ++v17;
LABEL_20:
      ++v23;
    }
    v27 = v24 == a2;
    if ( v24 > a2 )
    {
      v28 = v24 - 1;
      do
      {
        v29 = *(_DWORD *)(*v28 + 264);
        if ( v29 >= *(_DWORD *)(*v8 + 264) )
        {
          if ( v29 > *(_DWORD *)(*v8 + 264) )
            break;
          if ( --v8 != v28 )
          {
            v30 = *v8;
            *v8 = *v28;
            *v28 = v30;
          }
        }
        --v24;
        --v28;
      }
      while ( a2 < v24 );
      v27 = v24 == a2;
    }
    if ( v27 )
      break;
    --v24;
    if ( v23 != (__int64 *)a3 )
    {
      v34 = *v23;
      *v23 = *v24;
      *v24 = v34;
      goto LABEL_20;
    }
    if ( v24 == --v8 )
    {
      v33 = *v8;
    }
    else
    {
      v33 = *v24;
      *v24 = *v8;
      *v8 = v33;
    }
    *v8 = *--v17;
    *v17 = v33;
  }
  if ( v23 != (__int64 *)a3 )
  {
    if ( v17 != v23 )
    {
      v31 = *v8;
      *v8 = *v17;
      *v17 = v31;
    }
    v32 = *v8;
    ++v17;
    *v8++ = *v23;
    *v23 = v32;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
