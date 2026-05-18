/*
 * XREFs of sub_180065A68 @ 0x180065A68
 * Callers:
 *     sub_18010D300 @ 0x18010D300 (sub_18010D300.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180065A68(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm6

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  result = a1;
  v4 = _mm_div_ps((__m128)*a2, (__m128)*a3);
  *a1 = v4.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  return result;
}
