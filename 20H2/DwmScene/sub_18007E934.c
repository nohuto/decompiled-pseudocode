/*
 * XREFs of sub_18007E934 @ 0x18007E934
 * Callers:
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_18007E934(_DWORD *a1, double a2)
{
  __m128 v2; // xmm6
  _DWORD *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]),
         _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0));
  *a1 = v2.m128_i32[0];
  result = a1;
  a1[1] = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
  return result;
}
