/*
 * XREFs of ?GetValueAt@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@AEAV78@@Z @ 0x1801DFADC
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801DF0F0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 * Callees:
 *     ?FindFirstFrameIndex@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@IEBAIM@Z @ 0x1801DF6EC (-FindFirstFrameIndex@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@.c)
 */

// local variable allocation has failed, the output may be wrong!
_OWORD *__fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::GetValueAt(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5)
{
  __m128 v5; // xmm6
  unsigned int FirstFrameIndex; // eax
  __int64 v8; // r10
  _OWORD *v9; // r11
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __m128 v12; // xmm2
  __m128 v13; // xmm5
  __m128 v14; // xmm1
  __m128 v15; // xmm4
  __m128 v16; // xmm3
  __m128 v17; // xmm5
  __m128 v18; // xmm1

  v5 = *(__m128 *)&a3;
  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::FindFirstFrameIndex(
                      a1,
                      *(float *)&a3);
  v10 = *(_QWORD *)(v8 + 8);
  v11 = FirstFrameIndex + 1;
  if ( v11 >= (*(_QWORD *)(v8 + 16) - v10) / 28 )
  {
    *v9 = *(_OWORD *)(*(_QWORD *)(v8 + 16) - 24LL);
  }
  else
  {
    v12 = *(__m128 *)*(_QWORD *)(a4 + 8);
    v13 = (__m128)*(unsigned int *)(28LL * FirstFrameIndex + v10 + 20);
    v14 = (__m128)*(unsigned int *)(28LL * FirstFrameIndex + v10 + 24);
    v15 = (__m128)*(unsigned int *)(28 * v11 + v10 + 20);
    v16 = *(__m128 *)*(_QWORD *)(a5 + 8);
    v17 = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v12), *(__m128 *)(28LL * FirstFrameIndex + v10 + 4)),
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v16));
    v18 = (__m128)*(unsigned int *)(28 * v11 + v10 + 24);
    v5.m128_f32[0] = fmaxf(
                       fminf(
                         (float)(v5.m128_f32[0] - *(float *)(28LL * FirstFrameIndex + v10))
                       / (float)(*(float *)(28 * v11 + v10) - *(float *)(28LL * FirstFrameIndex + v10)),
                         1.0),
                       0.0);
    *v9 = _mm_add_ps(
            _mm_mul_ps(
              _mm_sub_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v12), *(__m128 *)(28 * v11 + v10 + 4)),
                  _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v16)),
                v17),
              _mm_shuffle_ps(v5, v5, 0)),
            v17);
  }
  return v9;
}
