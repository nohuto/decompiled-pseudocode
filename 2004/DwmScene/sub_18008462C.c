/*
 * XREFs of sub_18008462C @ 0x18008462C
 * Callers:
 *     sub_1800843D0 @ 0x1800843D0 (sub_1800843D0.c)
 * Callees:
 *     sub_1800846AC @ 0x1800846AC (sub_1800846AC.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18008462C(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-58h] BYREF
  __m128 v3; // [rsp+30h] [rbp-48h] BYREF

  sub_1800846AC(&v2, &v3);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180139A50, v2), _mm_and_ps((__m128)xmmword_180139A70, v3)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180139A50, *(__m128 *)&a1), (__m128)xmmword_180139A20));
}
