/*
 * XREFs of sub_1800207C4 @ 0x1800207C4
 * Callers:
 *     sub_180019F78 @ 0x180019F78 (sub_180019F78.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800207C4(double a1, __m128 *a2)
{
  return _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 170), a2[2]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0), *a2)),
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255), a2[3]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 85), a2[1])));
}
