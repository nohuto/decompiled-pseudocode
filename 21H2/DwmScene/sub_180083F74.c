/*
 * XREFs of sub_180083F74 @ 0x180083F74
 * Callers:
 *     sub_18008713C @ 0x18008713C (sub_18008713C.c)
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 *     sub_180101A10 @ 0x180101A10 (sub_180101A10.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 *     sub_180116F40 @ 0x180116F40 (sub_180116F40.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_180083F74(_DWORD *a1, unsigned __int64 *a2, double a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm2

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v4 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)),
         _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0));
  *a1 = v4.m128_i32[0];
  a1[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  return result;
}
