/*
 * XREFs of sub_180083FF0 @ 0x180083FF0
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_18008713C @ 0x18008713C (sub_18008713C.c)
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800B26D8 @ 0x1800B26D8 (sub_1800B26D8.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 *     sub_1801023A0 @ 0x1801023A0 (sub_1801023A0.c)
 *     sub_180115788 @ 0x180115788 (sub_180115788.c)
 *     sub_180116F40 @ 0x180116F40 (sub_180116F40.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180083FF0(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm6
  _DWORD *result; // rax
  __m128 v5; // xmm6

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v5 = _mm_sub_ps(v3, _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
  *a1 = v5.m128_i32[0];
  a1[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  a1[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  return result;
}
