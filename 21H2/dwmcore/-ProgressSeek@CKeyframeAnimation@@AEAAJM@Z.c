/*
 * XREFs of ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18004F554 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x1800D894C (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?GetIterationForSeekTime@CKeyframeAnimation@@AEAAIM@Z @ 0x1800D89E4 (-GetIterationForSeekTime@CKeyframeAnimation@@AEAAIM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProgressSeek(CKeyframeAnimation *this, float a2)
{
  char v3; // al
  float v4; // xmm0_4
  float v5; // xmm0_4
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  float v9; // xmm6_4
  int IterationForSeekTime; // eax
  float v11; // xmm2_4
  __int64 v12; // r10
  __m128 v14; // xmm2
  __m128 v15; // rt1
  int v16; // eax
  KeyframeSequence *v17; // rcx
  __int64 v18; // rcx
  float TimePositionWithinIteration; // xmm2_4
  __int64 v20; // r10
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v3 = *((_BYTE *)this + 573);
    if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v4 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
      if ( (LODWORD(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v14 = 0LL;
        v14.m128_f32[0] = (float)(int)v4 - v4;
        v15.m128_f32[0] = FLOAT_N0_5;
        v6 = (int)v4 - _mm_cmple_ss(v14, v15).m128_u32[0];
      }
      else
      {
        v5 = v4 + 6291456.25;
        v6 = (int)(LODWORD(v5) << 10) >> 11;
      }
      v7 = *((_DWORD *)this + 134);
      v8 = 0;
      if ( v7 > 0 )
        v6 *= v7 + 1;
      if ( *((_DWORD *)this + 132) == 1 && *((_DWORD *)this + 120) )
        v8 = *((_DWORD *)this + 120);
      v9 = (float)(v8 + v6) * a2;
      IterationForSeekTime = CKeyframeAnimation::GetIterationForSeekTime(this, v9 - (float)v8);
      *((_DWORD *)this + 133) = IterationForSeekTime;
      if ( v7 > 0 )
        *((_DWORD *)this + 135) = v7 - IterationForSeekTime;
      CKeyframeAnimation::PrepareSequenceForIteration(this, IterationForSeekTime);
      if ( *((_DWORD *)this + 132) == 1 && (v16 = *((_DWORD *)this + 120)) != 0 )
      {
        if ( (float)v16 < v9 )
        {
          *((_DWORD *)this + 121) = v16;
          TimePositionWithinIteration = CKeyframeAnimation::GetTimePositionWithinIteration(this, v9 - (float)v16);
          KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 48));
          *(_DWORD *)(v20 + 92) = (int)TimePositionWithinIteration;
        }
        else
        {
          *((_BYTE *)this + 572) &= ~0x40u;
          v17 = (KeyframeSequence *)*((_QWORD *)this + 48);
          *((_BYTE *)this + 572) |= *((_DWORD *)this + 121) < v16 ? 0 : 0x40;
          *((_DWORD *)this + 121) = (int)v9;
          KeyframeSequence::ConfigureTimer(v17);
          *(_DWORD *)(v18 + 92) = 0;
        }
      }
      else
      {
        v11 = CKeyframeAnimation::GetTimePositionWithinIteration(this, v9);
        KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 48));
        *(_DWORD *)(v12 + 92) = (int)v11;
        *((_BYTE *)this + 572) |= 0x40u;
      }
    }
    return 0LL;
  }
}
