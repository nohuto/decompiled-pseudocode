/*
 * XREFs of sub_1800B2630 @ 0x1800B2630
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800EBC80 @ 0x1800EBC80 (sub_1800EBC80.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 *     sub_180110800 @ 0x180110800 (sub_180110800.c)
 * Callees:
 *     sub_18001264C @ 0x18001264C (sub_18001264C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall sub_1800B2630(__m128 *a1, _OWORD *a2)
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
  return sub_18001264C(
           a2,
           *(double *)_mm_shuffle_ps(_mm_shuffle_ps(*a1, v2, 68), _mm_shuffle_ps(a1[2], v3, 68), 221).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 136).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 221).m128_u64);
}
