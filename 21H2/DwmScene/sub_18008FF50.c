/*
 * XREFs of sub_18008FF50 @ 0x18008FF50
 * Callers:
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_18008FF50(_DWORD *a1, double a2, unsigned __int64 *a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm2

  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v4 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)),
         _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0));
  *a1 = v4.m128_i32[0];
  a1[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  return result;
}
