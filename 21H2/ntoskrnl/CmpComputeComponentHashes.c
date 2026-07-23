/*
 * XREFs of CmpComputeComponentHashes @ 0x1407130A0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     CmpExpandPathInfo @ 0x1405F4E30 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __m128i v3; // xmm6
  char v4; // cl
  __int16 v6; // bx
  __int16 v7; // bp
  _WORD *v8; // rdi
  __int16 v9; // si
  __int64 v10; // rdi
  __int16 v11; // bp
  __int16 v12; // ax
  int v13; // r9d
  unsigned __int16 *v14; // r10
  __int64 v15; // r11
  unsigned __int16 v16; // ax
  __int64 result; // rax
  __int16 v18; // r14
  __int64 v19; // r15
  int v20; // r9d
  unsigned __int16 *v21; // r10
  __int64 v22; // r11
  unsigned __int16 v23; // ax
  __m128i v24; // [rsp+20h] [rbp-68h]
  __m128i v25; // [rsp+30h] [rbp-58h]
  char v26; // [rsp+90h] [rbp+8h]

  v3 = *a1;
  v4 = 0;
  v26 = 0;
  v6 = _mm_cvtsi128_si32(v3);
  v24.m128i_i32[1] = v3.m128i_i32[1];
  v25 = v3;
  v24.m128i_i16[0] = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = (_WORD *)v3.m128i_i64[1];
    v9 = v3.m128i_i16[1];
    do
    {
      if ( v7 >= 32 )
        break;
      if ( *v8 == 92 )
      {
        ++v7;
        v18 = v25.m128i_i16[0] - v6;
        v25.m128i_i16[0] = v18;
        v25.m128i_i16[1] = v18;
        if ( v7 > 8 && !v4 )
        {
          result = CmpExpandPathInfo(a3);
          if ( (int)result < 0 )
            return result;
          v26 = 1;
        }
        v19 = (unsigned int)(v7 - 1);
        if ( (unsigned int)v19 >= 8 )
          *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v7 - 9) + 6LL)) = v25;
        else
          *(__m128i *)(a3 + 16 * ((unsigned int)v19 + 2LL)) = v25;
        v20 = 0;
        if ( v18 )
        {
          v21 = (unsigned __int16 *)v25.m128i_i64[1];
          v22 = (unsigned __int16)(((unsigned __int16)(v18 - 1) >> 1) + 1);
          do
          {
            v23 = *v21;
            if ( *v21 >= 0x61u )
            {
              if ( v23 > 0x7Au )
                v23 = NLS_UPCASE(v23);
              else
                v23 -= 32;
            }
            ++v21;
            v20 = v23 + 37 * v20;
            --v22;
          }
          while ( v22 );
        }
        if ( (unsigned int)v19 >= 8 )
          *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v7 - 9)) = v20;
        else
          *(_DWORD *)(a3 + 4 * v19) = v20;
        do
        {
          if ( *v8 != 92 )
            break;
          v6 -= 2;
          ++v8;
          v9 -= 2;
          v24.m128i_i16[0] = v6;
        }
        while ( v6 );
        v24.m128i_i64[1] = (__int64)v8;
        v24.m128i_i16[1] = v9;
        v3 = v24;
        v4 = v26;
        v25 = v24;
      }
      else
      {
        ++v8;
        v6 -= 2;
        v9 -= 2;
        v24.m128i_i16[0] = v6;
      }
    }
    while ( v6 );
    v10 = (unsigned int)v7;
    if ( v6 )
    {
      return 3221225485LL;
    }
    else
    {
      v11 = v7 + 1;
      if ( v11 <= 8 || v4 || (result = CmpExpandPathInfo(a3), (int)result >= 0) )
      {
        if ( (unsigned int)v10 >= 8 )
          *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v10 - 8) + 6LL)) = v3;
        else
          *(__m128i *)(a3 + 16 * (v10 + 2)) = v3;
        v12 = _mm_cvtsi128_si32(v3);
        v13 = 0;
        if ( v12 )
        {
          v14 = (unsigned __int16 *)v3.m128i_i64[1];
          v15 = (unsigned __int16)(((unsigned __int16)(v12 - 1) >> 1) + 1);
          do
          {
            v16 = *v14;
            if ( *v14 >= 0x61u )
            {
              if ( v16 > 0x7Au )
                v16 = NLS_UPCASE(v16);
              else
                v16 -= 32;
            }
            ++v14;
            v13 = v16 + 37 * v13;
            --v15;
          }
          while ( v15 );
        }
        if ( (unsigned int)v10 >= 8 )
          *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v10 - 8)) = v13;
        else
          *(_DWORD *)(a3 + 4 * v10) = v13;
        *a2 = v11;
        return 0LL;
      }
    }
  }
  else
  {
    result = 0LL;
    *a2 = 0;
  }
  return result;
}
