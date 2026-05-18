/*
 * XREFs of sub_18007E720 @ 0x18007E720
 * Callers:
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800ACE08 @ 0x1800ACE08 (sub_1800ACE08.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 *     sub_1800FCAD0 @ 0x1800FCAD0 (sub_1800FCAD0.c)
 *     sub_18010FEB8 @ 0x18010FEB8 (sub_18010FEB8.c)
 *     sub_180111670 @ 0x180111670 (sub_180111670.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18007E720(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
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
