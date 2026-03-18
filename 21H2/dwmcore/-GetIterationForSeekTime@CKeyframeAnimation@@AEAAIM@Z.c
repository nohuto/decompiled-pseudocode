/*
 * XREFs of ?GetIterationForSeekTime@CKeyframeAnimation@@AEAAIM@Z @ 0x1800D89E4
 * Callers:
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     _o_fmod_0 @ 0x180101904 (_o_fmod_0.c)
 */

__int64 __fastcall CKeyframeAnimation::GetIterationForSeekTime(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  __int64 v4; // rcx
  float v5; // xmm6_4
  float v6; // xmm1_4
  __m128 v8; // xmm2
  __m128 v9; // rt1

  v2 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v2) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v8 = 0LL;
    v8.m128_f32[0] = (float)(int)v2 - v2;
    v9.m128_f32[0] = FLOAT_N0_5;
    v4 = (int)v2 - _mm_cmple_ss(v8, v9).m128_u32[0];
  }
  else
  {
    v3 = v2 + 6291456.25;
    v4 = (unsigned int)((int)(LODWORD(v3) << 10) >> 11);
  }
  v5 = a2 / (float)(int)v4;
  v6 = o_fmod_0(v4);
  if ( v6 == 0.0 )
    return (unsigned int)(int)fmaxf(0.0, v5 - 1.0);
  else
    return (unsigned int)(int)v5;
}
