/*
 * XREFs of sub_180085020 @ 0x180085020
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 * Callees:
 *     sub_18001264C @ 0x18001264C (sub_18001264C.c)
 *     sub_1800899CC @ 0x1800899CC (sub_1800899CC.c)
 */

__int64 __fastcall sub_180085020(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  double v4; // xmm3_8
  __m128 v6; // xmm7
  __m128 v7; // xmm6
  double v8; // xmm2_8

  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v6 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v7 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  if ( !a4 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  *(_QWORD *)&v8 = _mm_movelh_ps((__m128)*a4, (__m128)*((unsigned int *)a4 + 2)).m128_u64[0];
  sub_1800899CC();
  sub_18001264C((_OWORD *)a1, *(double *)_mm_sub_ps(v6, v7).m128_u64, v8, v4);
  return a1;
}
