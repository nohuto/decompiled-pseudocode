/*
 * XREFs of ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801D0FCC
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180024C20 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180027144 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180027544 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProgressSeek(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm3_4
  char v3; // al
  int v4; // edx
  int v5; // eax
  CKeyframeAnimation *v6; // r11
  __int64 v7; // r11
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10; // ebx
  __m128 v11; // xmm2
  __m128 v12; // rt1
  int v13; // ecx
  KeyframeSequence *v14; // r10
  float v15; // xmm2_4
  __int64 v16; // r10
  float v17; // xmm4_4
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // r11
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9FC,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v3 = *((_BYTE *)this + 541);
    if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      *((_DWORD *)this + 125) = 0;
      v4 = 0;
      if ( *((_DWORD *)this + 133) == 2 )
      {
        v5 = *((_DWORD *)this + 126);
        if ( v5 > 0 )
        {
          if ( a2 >= 0.5 )
          {
            *((_DWORD *)this + 125) = 1;
            *((_DWORD *)this + 127) = v5 - 1;
            v2 = a2 - 0.5;
            v4 = 1;
          }
          v2 = v2 + v2;
        }
      }
      CKeyframeAnimation::PrepareSequenceForIteration(this, v4);
      v8 = CKeyframeAnimation::GetAnimationTimeLength(v6) * 1000.0;
      if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v11 = 0LL;
        v11.m128_f32[0] = (float)(int)v8 - v8;
        v12.m128_f32[0] = FLOAT_N0_5;
        v10 = (int)v8 - _mm_cmple_ss(v11, v12).m128_u32[0];
      }
      else
      {
        v9 = v8 + 6291456.25;
        v10 = (int)(LODWORD(v9) << 10) >> 11;
      }
      if ( *(_DWORD *)(v7 + 496) == 1 && (v13 = *(_DWORD *)(v7 + 448)) != 0 )
      {
        v14 = *(KeyframeSequence **)(v7 + 360);
        v15 = (float)((float)v10 + (float)v13) * v2;
        if ( (float)v13 < v15 )
        {
          *(_DWORD *)(v7 + 452) = v13;
          KeyframeSequence::ConfigureTimer(v14);
          *(_DWORD *)(v18 + 92) = (int)(float)(v15 - v17);
        }
        else
        {
          *(_BYTE *)(v7 + 540) &= ~0x40u;
          *(_BYTE *)(v7 + 540) |= *(_DWORD *)(v7 + 452) < v13 ? 0 : 0x40;
          *(_DWORD *)(v7 + 452) = (int)v15;
          KeyframeSequence::ConfigureTimer(v14);
          *(_DWORD *)(v16 + 92) = 0;
        }
      }
      else
      {
        KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v7 + 360));
        *(_DWORD *)(v19 + 92) = (int)(float)((float)v10 * v2);
        *(_BYTE *)(v20 + 540) |= 0x40u;
      }
    }
    return 0LL;
  }
}
