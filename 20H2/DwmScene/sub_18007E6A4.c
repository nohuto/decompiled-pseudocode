/*
 * XREFs of sub_18007E6A4 @ 0x18007E6A4
 * Callers:
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 *     sub_1800F8EE0 @ 0x1800F8EE0 (sub_1800F8EE0.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 *     sub_180111670 @ 0x180111670 (sub_180111670.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_18007E6A4(_DWORD *a1, unsigned __int64 *a2, double a3)
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
