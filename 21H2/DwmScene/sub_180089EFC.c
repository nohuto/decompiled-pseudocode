/*
 * XREFs of sub_180089EFC @ 0x180089EFC
 * Callers:
 *     sub_180089CA0 @ 0x180089CA0 (sub_180089CA0.c)
 * Callees:
 *     sub_180089F7C @ 0x180089F7C (sub_180089F7C.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180089EFC(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-58h] BYREF
  __m128 v3; // [rsp+30h] [rbp-48h] BYREF

  sub_180089F7C(&v2, &v3);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_18013FB50, v2), _mm_and_ps((__m128)xmmword_18013FB70, v3)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_18013FB50, *(__m128 *)&a1), (__m128)xmmword_18013FB20));
}
