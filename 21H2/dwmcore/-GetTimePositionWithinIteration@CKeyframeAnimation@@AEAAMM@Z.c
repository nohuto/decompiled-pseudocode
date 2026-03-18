/*
 * XREFs of ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x1800D894C
 * Callers:
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     _o_fmod_0 @ 0x180101904 (_o_fmod_0.c)
 */

float __fastcall CKeyframeAnimation::GetTimePositionWithinIteration(CKeyframeAnimation *this, float a2)
{
  __int64 v2; // rcx
  float v3; // xmm0_4
  float v4; // xmm0_4
  int v5; // ebx
  float result; // xmm0_4
  __m128 v7; // xmm2
  __m128 v8; // rt1

  if ( a2 == 0.0 )
    return 0.0;
  v3 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7 = 0LL;
    v7.m128_f32[0] = (float)(int)v3 - v3;
    v8.m128_f32[0] = FLOAT_N0_5;
    v5 = (int)v3 - _mm_cmple_ss(v7, v8).m128_u32[0];
  }
  else
  {
    v4 = v3 + 6291456.25;
    v5 = (int)(LODWORD(v4) << 10) >> 11;
  }
  result = o_fmod_0(v2);
  if ( result == 0.0 )
    return (float)v5;
  return result;
}
