/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x1800A5574
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800A5EE0 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE00U?$less@X@0@@Z @ 0x1800A5428 (--$_Med3_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE00U-$less@X@0@@Z.c)
 */

unsigned __int8 **__fastcall std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r14
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v8; // rcx
  __int64 v9; // r10
  unsigned __int8 *v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // r8
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rcx
  unsigned __int8 v18; // al
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // r9
  unsigned __int8 v21; // al
  bool v22; // zf
  unsigned __int8 *v23; // rcx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  unsigned __int8 **result; // rax

  v3 = a3 - 1;
  v4 = &a2[(a3 - a2) >> 1];
  v8 = a2;
  if ( a3 - 1 - a2 <= 40 )
  {
    v15 = a3 - 1;
  }
  else
  {
    v9 = (a3 - a2) >> 3;
    v10 = &a2[v9];
    std::_Med3_unchecked<unsigned char *,std::less<void>>(a2, &a2[v9], &a2[2 * v9]);
    std::_Med3_unchecked<unsigned char *,std::less<void>>(&v4[-v11], v4, &v4[v11]);
    std::_Med3_unchecked<unsigned char *,std::less<void>>(&v3[-v13], &v3[-v12], v3);
    v15 = v14;
    v8 = v10;
  }
  std::_Med3_unchecked<unsigned char *,std::less<void>>(v8, v4, v15);
  v16 = v4 + 1;
  if ( a2 < v4 )
  {
    v17 = v4;
    do
    {
      if ( *(v4 - 1) < *v4 )
        break;
      if ( *(v4 - 1) > *v4 )
        break;
      v4 = v17 - 1;
      v17 = v4;
    }
    while ( a2 < v4 );
  }
  if ( v16 < a3 )
  {
    v18 = *v4;
    do
    {
      if ( *v16 < v18 )
        break;
      if ( *v16 > v18 )
        break;
      ++v16;
    }
    while ( v16 < a3 );
  }
  v19 = v16;
  v20 = v4;
  while ( 1 )
  {
    while ( v19 < a3 )
    {
      if ( *v4 < *v19 )
        goto LABEL_20;
      if ( *v4 > *v19 )
        break;
      if ( v16 != v19 )
      {
        v21 = *v16;
        *v16 = *v19;
        *v19 = v21;
      }
      ++v16;
LABEL_20:
      ++v19;
    }
    v22 = v20 == a2;
    if ( v20 > a2 )
    {
      v23 = v20 - 1;
      do
      {
        if ( *v23 >= *v4 )
        {
          if ( *v23 > *v4 )
            break;
          if ( --v4 != v23 )
          {
            v24 = *v4;
            *v4 = *v23;
            *v23 = v24;
          }
        }
        --v20;
        --v23;
      }
      while ( a2 < v20 );
      v22 = v20 == a2;
    }
    if ( v22 )
      break;
    --v20;
    if ( v19 != a3 )
    {
      v29 = *v19;
      *v19 = *v20;
      *v20 = v29;
      goto LABEL_20;
    }
    if ( v20 != --v4 )
    {
      v27 = *v20;
      *v20 = *v4;
      *v4 = v27;
    }
    v28 = *v4;
    *v4 = *--v16;
    *v16 = v28;
  }
  if ( v19 != a3 )
  {
    if ( v16 != v19 )
    {
      v25 = *v4;
      *v4 = *v16;
      *v16 = v25;
    }
    v26 = *v4;
    ++v16;
    *v4++ = *v19;
    *v19 = v26;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v4;
  a1[1] = v16;
  return result;
}
