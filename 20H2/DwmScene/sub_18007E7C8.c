/*
 * XREFs of sub_18007E7C8 @ 0x18007E7C8
 * Callers:
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 *     sub_1800FCAD0 @ 0x1800FCAD0 (sub_1800FCAD0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18007E7C8(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm6
  _DWORD *result; // rax
  __m128 v5; // xmm2

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v5 = _mm_add_ps(_mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)), v3);
  *a1 = v5.m128_i32[0];
  a1[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  a1[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  return result;
}
