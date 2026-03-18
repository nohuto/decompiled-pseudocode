/*
 * XREFs of VrpUpdateKeyInformation @ 0x1405D2DA4
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D2734 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        __m128i *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  char *v8; // r12
  unsigned int *v9; // r14
  unsigned int v10; // edi
  int v11; // ecx
  int v12; // ecx
  __m128i *v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // r11
  int *v16; // rcx
  int *v17; // r15
  unsigned int v18; // eax
  int v20; // ecx
  unsigned __int64 v21; // rcx
  _WORD *v22; // r8
  __int64 v23; // rax
  __int16 v24; // si
  __m128i v25; // xmm0
  unsigned __int64 v26; // rax
  _WORD *v27; // r15
  __int64 v28; // r12
  int v29; // eax
  int *v30; // [rsp+20h] [rbp-48h]
  __m128i v31; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v31 = 0LL;
  if ( !a1 )
  {
    v15 = 4LL;
    v16 = 0LL;
    v14 = 16;
    v23 = 3LL;
    goto LABEL_30;
  }
  v11 = a1 - 1;
  if ( !v11 )
  {
    v23 = 5LL;
    v9 = (unsigned int *)(a2 + 3);
    v16 = a2 + 4;
    v14 = 24;
    v15 = 6LL;
LABEL_30:
    v24 = 0;
    v30 = &a2[v23];
    v31 = *a5;
    v25 = v31;
    v31.m128i_i16[0] = 0;
    v26 = (unsigned __int64)(unsigned __int16)_mm_cvtsi128_si32(v25) >> 1;
    if ( v26 )
    {
      v27 = (_WORD *)(v25.m128i_i64[1] - 2 + 2 * v26);
      do
      {
        if ( *v27 == 92 )
          break;
        v24 += 2;
        --v27;
        --v26;
      }
      while ( v26 );
      v31.m128i_i16[0] = v24;
    }
    v31.m128i_i16[1] = v24;
    v13 = &v31;
    v31.m128i_i64[1] = v25.m128i_i64[1] + 2 * v26;
LABEL_5:
    v17 = &a2[v15];
    if ( v9 )
    {
      if ( !a2 )
      {
        *a4 += v13->m128i_u16[0];
        v18 = *a4;
LABEL_8:
        if ( a3 >= v14 )
        {
          if ( a3 < v18 )
          {
            return (unsigned int)-2147483643;
          }
          else
          {
            if ( v9 && *v16 )
            {
              memmove((char *)a2 + v10, v8, (unsigned int)*v16);
              *v9 = v10;
            }
            memmove(v17, (const void *)v13->m128i_i64[1], v13->m128i_u16[0]);
            *v30 = v13->m128i_u16[0];
          }
          return v6;
        }
        return (unsigned int)-1073741789;
      }
      v28 = *v9;
      *a4 = 24;
      v8 = (char *)a2 + v28;
      v10 = v13->m128i_u16[0] + 24;
      *a4 = v10;
      v29 = *v16;
      if ( *v16 )
      {
        v10 = (v10 + 7) & 0xFFFFFFF8;
        *a4 = v10;
        v29 = *v16;
      }
      v18 = v10 + v29;
    }
    else
    {
      v18 = v15 * 4 + v13->m128i_u16[0];
    }
    *a4 = v18;
    goto LABEL_8;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v13 = a5;
    v14 = 4;
    v15 = 1LL;
    v30 = a2;
    v16 = 0LL;
    goto LABEL_5;
  }
  v20 = v12 - 1;
  if ( v20 )
  {
    if ( v20 != 4 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v21 = (unsigned __int64)a5->m128i_u16[0] >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v21 )
  {
    v22 = (_WORD *)(a5->m128i_i64[1] - 2 + 2 * v21);
    do
    {
      if ( *v22 == 92 )
        break;
      --v22;
      --v21;
    }
    while ( v21 );
  }
  a2[8] = a5->m128i_u16[0] - 2 * v21;
  return v6;
}
