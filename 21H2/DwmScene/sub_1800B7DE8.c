/*
 * XREFs of sub_1800B7DE8 @ 0x1800B7DE8
 * Callers:
 *     sub_1800B7DC0 @ 0x1800B7DC0 (sub_1800B7DC0.c)
 *     sub_1800B7F7C @ 0x1800B7F7C (sub_1800B7F7C.c)
 *     sub_1800CC000 @ 0x1800CC000 (sub_1800CC000.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_UNKNOWN **__fastcall sub_1800B7DE8(__m128 *a1, double a2)
{
  _UNKNOWN **result; // rax
  __m128 v3; // xmm6
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  *a1 = _mm_mul_ps(v3, *a1);
  if ( a1 == (__m128 *)-16LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[1] = _mm_mul_ps(a1[1], v3);
  if ( a1 == (__m128 *)-32LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[2] = _mm_mul_ps(v3, a1[2]);
  if ( a1 == (__m128 *)-48LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[3] = _mm_mul_ps(v3, a1[3]);
  if ( a1 == (__m128 *)-64LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[4] = _mm_mul_ps(v3, a1[4]);
  if ( a1 == (__m128 *)-80LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[5] = _mm_mul_ps(v3, a1[5]);
  if ( a1 == (__m128 *)-96LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[6] = _mm_mul_ps(v3, a1[6]);
  if ( a1 == (__m128 *)-112LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[7] = _mm_mul_ps(v3, a1[7]);
  if ( a1 == (__m128 *)-128LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  a1[8] = _mm_mul_ps(v3, a1[8]);
  return result;
}
