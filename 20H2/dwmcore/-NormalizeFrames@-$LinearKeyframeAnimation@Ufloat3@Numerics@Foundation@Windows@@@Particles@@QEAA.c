/*
 * XREFs of ?NormalizeFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAXXZ @ 0x1801DB474
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801DE294 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::NormalizeFrames(
        __int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __int128 v11; // [rsp+Ch] [rbp-2Ch]

  v2 = 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    result = (unsigned __int64)((unsigned __int128)((*(_QWORD *)(a1 + 16) - v3) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    if ( (unsigned int)v2 >= (unsigned __int64)((*(_QWORD *)(a1 + 16) - v3) / 24) )
      break;
    v5 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    v6 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v3 + 8 * v5 + 4), (__m128)*(unsigned int *)(v3 + 8 * v5 + 12));
    v7 = _mm_mul_ps(v6, v6);
    v8 = _mm_shuffle_ps(v7, v7, 102);
    v7.m128_f32[0] = (float)(v7.m128_f32[0] + v8.m128_f32[0]) + _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
    v9 = _mm_div_ps(v6, _mm_sqrt_ps(_mm_shuffle_ps(v7, v7, 0)));
    v10 = (__m128)*(unsigned int *)(v3 + 8 * v5 + 20);
    *(_QWORD *)((char *)&v11 + 4) = _mm_unpacklo_ps(v9, _mm_shuffle_ps(v9, v9, 85)).m128_u64[0];
    LODWORD(v11) = *(_DWORD *)(v3 + 8 * v5);
    HIDWORD(v11) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
    *(_OWORD *)(v3 + 8 * v5) = v11;
    *(_QWORD *)(v3 + 8 * v5 + 16) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v3 + 8 * v5 + 16), v10).m128_u64[0];
  }
  return result;
}
