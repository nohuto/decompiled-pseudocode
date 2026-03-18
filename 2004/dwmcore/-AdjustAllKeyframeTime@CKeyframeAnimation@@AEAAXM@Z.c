/*
 * XREFs of ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1801D27A8
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800C00B0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180089BB4 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

void __fastcall CKeyframeAnimation::AdjustAllKeyframeTime(CKeyframeAnimation *this, float a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  float v4; // xmm0_4
  float v5; // xmm0_4
  unsigned int v6; // ecx
  __m128 v7; // xmm2
  __m128 v8; // rt1
  int v9; // eax
  __int64 i; // r9
  __int64 v11; // r8
  __int64 v12; // rdx

  v4 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7 = 0LL;
    v7.m128_f32[0] = (float)(int)v4 - v4;
    v8.m128_f32[0] = FLOAT_N0_5;
    v6 = (int)v4 - _mm_cmple_ss(v7, v8).m128_u32[0];
  }
  else
  {
    v5 = v4 + 6291456.25;
    v6 = (int)(LODWORD(v5) << 10) >> 11;
  }
  v9 = v2 / v6;
  for ( i = 0LL; (int)i < *(_DWORD *)(*(_QWORD *)(v3 + 360) + 112LL); *(_BYTE *)(v11 + 140) |= 4u )
  {
    v11 = *(_QWORD *)(v3 + 360);
    v12 = 3 * i;
    i = (unsigned int)(i + 1);
    *(_DWORD *)(*(_QWORD *)(v11 + 104) + 8 * v12) *= v9;
  }
}
