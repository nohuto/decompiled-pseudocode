/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800465AC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180046768 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802223E0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 */

__int64 __fastcall CKeyframeAnimation::SetIterationInfo(__int64 a1, float a2, int a3, float a4, unsigned int a5)
{
  char v5; // si
  int v6; // r14d
  char v7; // bp
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  float v13; // xmm7_4
  int v14; // eax
  float v15; // xmm6_4
  __m128 v16; // xmm2
  __m128 v17; // rt1
  unsigned int v18; // [rsp+20h] [rbp-58h]
  float v19; // [rsp+80h] [rbp+8h]

  v5 = *(_BYTE *)(a1 + 573);
  v6 = 0;
  v7 = 0;
  if ( (v5 & 1) != 0 )
  {
    v11 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147418113, 0x3E1u, 0LL);
    return v11;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 >= 0.0 )
    {
      if ( a2 > 0.0 )
      {
        v6 = (int)o_ceilf_0(a2) - 1;
        v15 = a2 - floorf(a2);
        if ( v15 != 0.0 )
          *(float *)(a1 + 544) = v15;
      }
    }
    else
    {
      v6 = -1;
    }
  }
  v10 = a3;
  if ( !a3 )
    goto LABEL_4;
  v10 = a3 - 1;
  if ( a3 == 1 )
  {
    a3 = 0;
LABEL_25:
    v7 = 1;
    goto LABEL_4;
  }
  v10 = a3 - 2;
  if ( a3 == 2 )
    goto LABEL_4;
  v10 = a3 - 3;
  if ( a3 == 3 )
  {
    a3 = 2;
    goto LABEL_25;
  }
  if ( a3 != 4 )
  {
    v18 = 1060;
LABEL_28:
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024809, v18, 0LL);
    return v11;
  }
  v6 = 0;
LABEL_4:
  if ( a5 > 2 )
  {
    v18 = 1079;
    goto LABEL_28;
  }
  *(_DWORD *)(a1 + 536) = v6;
  *(_DWORD *)(a1 + 568) = a5;
  *(_DWORD *)(a1 + 564) = a3;
  *(_BYTE *)(a1 + 573) = (8 * v7) | v5 & 0xF7;
  if ( a4 > 0.0 )
  {
    v13 = a4 * 1000.0;
    if ( COERCE_UNSIGNED_INT(fabs(a4 * 1000.0)) > 0x497FFFF0 )
    {
      v16 = 0LL;
      v16.m128_f32[0] = (float)(int)v13 - v13;
      v17.m128_f32[0] = FLOAT_N0_5;
      v14 = (int)v13 - _mm_cmple_ss(v16, v17).m128_u32[0];
    }
    else
    {
      v19 = v13 + 6291456.25;
      v14 = (int)(LODWORD(v19) << 10) >> 11;
    }
    *(_DWORD *)(a1 + 480) = v14;
  }
  return 0;
}
