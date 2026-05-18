/*
 * XREFs of sub_18009B290 @ 0x18009B290
 * Callers:
 *     sub_18009CD10 @ 0x18009CD10 (sub_18009CD10.c)
 *     sub_18009E380 @ 0x18009E380 (sub_18009E380.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall sub_18009B290(unsigned __int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  __m128 v3; // xmm8
  unsigned __int64 v4; // rdi
  __m128 v5; // xmm7
  __int128 *result; // rax
  __m128 v7; // xmm6

  v2 = a2;
  if ( !a2 )
    wassert(L"Corners != nullptr", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXCollision.inl", 0x4E2u);
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( a1 == (unsigned __int64 *)-12LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v4 = 0LL;
  v5 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a1 + 12), (__m128)*((unsigned int *)a1 + 5));
  do
  {
    result = xmmword_18013FA30;
    v7 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_18013FA30[v4], v5), v3);
    if ( !v2 )
      wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x5F3u);
    *v2 = v7.m128_i32[0];
    ++v4;
    v2[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
    v2[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
    v2 += 3;
  }
  while ( v4 < 8 );
  return result;
}
