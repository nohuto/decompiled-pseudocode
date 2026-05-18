/*
 * XREFs of sub_18001D490 @ 0x18001D490
 * Callers:
 *     sub_180011AD0 @ 0x180011AD0 (sub_180011AD0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     sub_1800B26AC @ 0x1800B26AC (sub_1800B26AC.c)
 *     sub_1800C6564 @ 0x1800C6564 (sub_1800C6564.c)
 *     sub_1800C66F4 @ 0x1800C66F4 (sub_1800C66F4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001D490(__m128 *a1, float *a2, float a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 result; // rax
  __m128 *v8; // rdi
  float v9[4]; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v10[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[144]; // [rsp+D0h] [rbp-30h] BYREF

  sub_1800C6564(v11);
  v5 = a3 * a2[2];
  v6 = a3 * a2[1];
  v9[0] = a3 * *a2;
  v9[1] = v6;
  v9[2] = v5;
  v9[3] = 1.0;
  sub_1800C66F4(v11, v9);
  result = sub_1800B26AC(v10, v11);
  if ( a1 == (__m128 *)-48LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[3] = _mm_add_ps(v10[0], a1[3]);
  if ( a1 == (__m128 *)-64LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[4] = _mm_add_ps(v10[1], a1[4]);
  if ( a1 == (__m128 *)-80LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[5] = _mm_add_ps(v10[2], a1[5]);
  if ( a1 == (__m128 *)-96LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[6] = _mm_add_ps(v10[3], a1[6]);
  if ( a1 == (__m128 *)-112LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[7] = _mm_add_ps(v10[4], a1[7]);
  if ( a1 == (__m128 *)-128LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[8] = _mm_add_ps(v10[5], a1[8]);
  if ( a1 == (__m128 *)-144LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[9] = _mm_add_ps(v10[6], a1[9]);
  if ( a1 == (__m128 *)-160LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[10] = _mm_add_ps(v10[7], a1[10]);
  v8 = a1 + 11;
  if ( !v8 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  *v8 = _mm_add_ps(v10[8], *v8);
  return result;
}
