/*
 * XREFs of MiCreateInitialPfns @ 0x14022A3CC
 * Callers:
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCreateInitialPfns(__m128i *a1, __int64 a2, __m128i *a3)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  unsigned __int64 result; // rax
  __m128i v6; // xmm2
  __m128i *v7; // rdx

  v3 = *a3;
  v4 = a3[1];
  result = 48 * a2;
  v6 = a3[2];
  v7 = &a1[3 * a2];
  if ( result > 0x1000 )
  {
    while ( a1 != v7 )
    {
      _mm_stream_si128(a1, v3);
      _mm_stream_si128(a1 + 1, v4);
      _mm_stream_si128(a1 + 2, v6);
      a1 += 3;
    }
    _mm_sfence();
  }
  else
  {
    while ( a1 != v7 )
    {
      *a1 = v3;
      a1[1] = v4;
      a1[2] = v6;
      a1 += 3;
    }
  }
  return result;
}
