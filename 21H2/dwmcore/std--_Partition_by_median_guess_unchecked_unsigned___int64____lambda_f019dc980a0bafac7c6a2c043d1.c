/*
 * XREFs of std::_Partition_by_median_guess_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DD4D4
 * Callers:
 *     std::_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DDB1C (std--_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___.c)
 * Callees:
 *     std::_Guess_median_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DCEFC (std--_Guess_median_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___.c)
 */

_QWORD *__fastcall std::_Partition_by_median_guess_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rax
  float v11; // xmm1_4
  _QWORD *v12; // rcx
  __int64 v13; // r8
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  float v17; // xmm0_4
  _QWORD *v18; // r8
  _QWORD *v19; // r10
  __int64 v20; // rcx
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rax
  bool v24; // zf
  _QWORD *v25; // r11
  __int64 v26; // rcx
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 8 * ((__int64)((__int64)a3 - a2) >> 4));
  std::_Guess_median_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___(
    a2,
    (__int64)v6,
    (__int64)(a3 - 1));
  v8 = v6 + 1;
  if ( a2 < (unsigned __int64)v6 )
  {
    v9 = *(_QWORD *)(v7 + 976);
    v10 = *v6;
    do
    {
      v11 = *(float *)(v9 + 4 * v10);
      v12 = v6 - 1;
      v13 = *(v6 - 1);
      v14 = *(float *)(v9 + 4 * v13);
      if ( v14 > v11 )
        break;
      if ( v11 > v14 )
        break;
      --v6;
      v10 = v13;
    }
    while ( a2 < (unsigned __int64)v12 );
  }
  if ( v8 < a3 )
  {
    v15 = *(_QWORD *)(v7 + 976);
    v16 = *(float *)(v15 + 4LL * *v6);
    do
    {
      v17 = *(float *)(v15 + 4LL * *v8);
      if ( v17 > v16 )
        break;
      if ( v16 > v17 )
        break;
      ++v8;
    }
    while ( v8 < a3 );
  }
  v18 = v8;
  v19 = v6;
  while ( 1 )
  {
    while ( v18 < a3 )
    {
      v20 = *(_QWORD *)(v7 + 976);
      v21 = *(float *)(v20 + 4LL * *v18);
      v22 = *(float *)(v20 + 4LL * *v6);
      if ( v22 > v21 )
        goto LABEL_17;
      if ( v21 > v22 )
        break;
      if ( v8 != v18 )
      {
        v23 = *v8;
        *v8 = *v18;
        *v18 = v23;
      }
      ++v8;
LABEL_17:
      ++v18;
    }
    v24 = v19 == (_QWORD *)a2;
    if ( (unsigned __int64)v19 > a2 )
    {
      v25 = v19 - 1;
      do
      {
        v26 = *(_QWORD *)(v7 + 976);
        v27 = *(float *)(v26 + 4LL * *v25);
        v28 = *(float *)(v26 + 4LL * *v6);
        if ( v27 <= v28 )
        {
          if ( v28 > v27 )
            break;
          if ( --v6 != v25 )
          {
            v29 = *v6;
            *v6 = *v25;
            *v25 = v29;
          }
        }
        --v19;
        --v25;
      }
      while ( a2 < (unsigned __int64)v19 );
      v24 = v19 == (_QWORD *)a2;
    }
    if ( v24 )
      break;
    --v19;
    if ( v18 != a3 )
    {
      v33 = *v18;
      *v18 = *v19;
      *v19 = v33;
      goto LABEL_17;
    }
    if ( v19 == --v6 )
    {
      v32 = *v6;
    }
    else
    {
      v32 = *v19;
      *v19 = *v6;
      *v6 = v32;
    }
    *v6 = *--v8;
    *v8 = v32;
  }
  if ( v18 != a3 )
  {
    if ( v8 != v18 )
    {
      v30 = *v6;
      *v6 = *v8;
      *v8 = v30;
    }
    v31 = *v6;
    ++v8;
    *v6++ = *v18;
    *v18 = v31;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
