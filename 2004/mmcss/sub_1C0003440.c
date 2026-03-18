/*
 * XREFs of sub_1C0003440 @ 0x1C0003440
 * Callers:
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000B090 @ 0x1C000B090 (sub_1C000B090.c)
 *     sub_1C000B290 @ 0x1C000B290 (sub_1C000B290.c)
 *     sub_1C000C630 @ 0x1C000C630 (sub_1C000C630.c)
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 *     sub_1C000E0B0 @ 0x1C000E0B0 (sub_1C000E0B0.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_1C0003440(__m128 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __m128 *result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  char *v6; // rcx
  unsigned __int64 v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( a3 < 8 )
  {
    for ( ; a3; --a3 )
      a1->m128_i8[a3 - 1] = a2;
  }
  else
  {
    v4 = 0x101010101010101LL * a2;
    if ( a3 >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *a1 = v8;
      v9 = (char *)a1 + a3;
      v10 = (__m128 *)((unsigned __int64)&a1[1] & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = a3 & 0x78;
      v6 = (char *)a1 + (a3 & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(unsigned __int64 *)((char *)&result->m128_u64[-1] + v5) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = a3 & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
