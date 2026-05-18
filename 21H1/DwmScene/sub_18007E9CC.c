/*
 * XREFs of sub_18007E9CC @ 0x18007E9CC
 * Callers:
 *     sub_180080FF4 @ 0x180080FF4 (sub_180080FF4.c)
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18007E9CC(_DWORD *a1, float a2)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm6
  _DWORD *result; // rax

  if ( a2 == 0.0 )
    wassert(
      L"S != 0.0f",
      L"onecoreuap\\windows\\dwm\\spectre\\CoreUtils\\Shared\\CoreUtils\\cpp\\Inc\\CoreUtils\\Math\\SimpleMath.inl",
      0x29Du);
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = (__m128)0x3F800000u;
  v3.m128_f32[0] = 1.0 / a2;
  v4 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]),
         _mm_shuffle_ps(v3, v3, 0));
  *a1 = v4.m128_i32[0];
  result = a1;
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  return result;
}
