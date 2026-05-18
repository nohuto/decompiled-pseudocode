/*
 * XREFs of sub_1800889A0 @ 0x1800889A0
 * Callers:
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_180088B74 @ 0x180088B74 (sub_180088B74.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1800889A0(_DWORD *a1, unsigned __int64 *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  _DWORD *result; // rax
  __m128 v5; // xmm3
  __m128 v6; // xmm3

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  result = a1;
  v5 = _mm_add_ps(
         _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), a3[2]), a3[3]),
           _mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), a3[1])),
         _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *a3));
  v6 = _mm_div_ps(v5, _mm_shuffle_ps(v5, v5, 255));
  *a1 = v6.m128_i32[0];
  a1[2] = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  a1[1] = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  return result;
}
