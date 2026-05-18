/*
 * XREFs of sub_1800ACD60 @ 0x1800ACD60
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800E63B0 @ 0x1800E63B0 (sub_1800E63B0.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 *     sub_18010AF30 @ 0x18010AF30 (sub_18010AF30.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall sub_1800ACD60(__m128 *a1, _OWORD *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm4

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  v2 = a1[1];
  v3 = a1[3];
  v4 = _mm_shuffle_ps(*a1, v2, 238);
  v5 = _mm_shuffle_ps(a1[2], v3, 238);
  return sub_18001256C(
           a2,
           *(double *)_mm_shuffle_ps(_mm_shuffle_ps(*a1, v2, 68), _mm_shuffle_ps(a1[2], v3, 68), 221).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 136).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 221).m128_u64);
}
