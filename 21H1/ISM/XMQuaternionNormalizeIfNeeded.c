/*
 * XREFs of XMQuaternionNormalizeIfNeeded @ 0x1800C7050
 * Callers:
 *     _anonymous_namespace_::MakePoseValid @ 0x1800C66FC (_anonymous_namespace_--MakePoseValid.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall XMQuaternionNormalizeIfNeeded(__m128 *a1)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __m128 v7; // xmm3
  __m128 v8; // xmm3
  __m128 v9; // xmm3
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v12; // xmm1

  v1 = *a1;
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_add_ps(_mm_shuffle_ps(*a1, v2, 64), v2);
  v4 = _mm_add_ps(_mm_shuffle_ps(v2, v3, 48), v3);
  v5 = _mm_sub_ps(_mm_shuffle_ps(v4, v4, 170), (__m128)_xmm);
  if ( _mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v5), v5), (__m128)_xmm)) == 15 )
    return *a1;
  v6 = _mm_shuffle_ps(v2, v2, 238);
  v7 = _mm_add_ps(v2, v6);
  v8 = _mm_shuffle_ps(v7, v7, 64);
  v9 = _mm_add_ps(v8, _mm_shuffle_ps(v6, v8, 240));
  v10 = _mm_shuffle_ps(v9, v9, 170);
  v11 = _mm_sqrt_ps(v10);
  v12 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v10);
  return _mm_or_ps(
           _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v11), _mm_div_ps(v1, v11)), v12),
           _mm_andnot_ps(v12, DirectX::g_XMQNaN));
}
