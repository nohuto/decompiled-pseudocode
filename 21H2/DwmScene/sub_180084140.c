/*
 * XREFs of sub_180084140 @ 0x180084140
 * Callers:
 *     sub_1800868C4 @ 0x1800868C4 (sub_1800868C4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180084140(_DWORD *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm7
  __m128 v3; // xmm6
  _DWORD *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_mul_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2);
  *a1 = v3.m128_i32[0];
  result = a1;
  a1[1] = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v3, v3, 170).m128_u32[0];
  return result;
}
