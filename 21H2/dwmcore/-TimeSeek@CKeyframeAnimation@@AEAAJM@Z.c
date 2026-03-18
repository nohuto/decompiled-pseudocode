/*
 * XREFs of ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800EB7C0
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18004F554 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::TimeSeek(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm3_4
  char v3; // al
  int v4; // eax
  CKeyframeAnimation *v5; // r10
  float AnimationTimeLength; // xmm0_4
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r10
  __int64 v10; // rcx
  int v11; // r10d
  unsigned int v12; // ebx
  float v14; // xmm1_4

  v2 = a2;
  if ( a2 < 0.0 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x9D7u);
  }
  else
  {
    v3 = *((_BYTE *)this + 573);
    if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v4 = *((_DWORD *)this + 120);
      if ( v4 > 0 )
      {
        v14 = a2 * 1000.0;
        if ( v14 <= (float)v4 )
        {
          v4 = (int)v14;
          v2 = 0.0;
        }
        else
        {
          v2 = v2 - (float)((float)v4 / 1000.0);
        }
        *((_DWORD *)this + 121) = v4;
      }
      AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
      v7 = *((_DWORD *)v5 + 134);
      v8 = (int)(float)(v2 / AnimationTimeLength);
      if ( v7 >= 0 && (*((_DWORD *)v5 + 135) = v7 - v8, v7 - v8 < 0) )
        *((_DWORD *)v5 + 135) = 0;
      else
        v7 = (int)(float)(v2 / AnimationTimeLength);
      *((_DWORD *)v5 + 133) = v7;
      CKeyframeAnimation::PrepareSequenceForIteration(v5, v7);
      KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v9 + 384));
      *(_DWORD *)(v10 + 92) = v11;
    }
    return 0;
  }
  return v12;
}
