/*
 * XREFs of ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18009C558
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180098D98 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180099DE0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180099ED4 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18009A4FC (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::TimeSeek(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm3_4
  char v3; // al
  int v4; // eax
  CKeyframeAnimation *v5; // r11
  float AnimationTimeLength; // xmm0_4
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r11
  __int64 v10; // rcx
  int v11; // r10d
  unsigned int v12; // ebx
  float v14; // xmm1_4

  v2 = a2;
  if ( a2 < 0.0 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x9A1u, 0LL);
  }
  else
  {
    v3 = *((_BYTE *)this + 541);
    if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v4 = *((_DWORD *)this + 112);
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
        *((_DWORD *)this + 113) = v4;
      }
      AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
      v7 = *((_DWORD *)v5 + 126);
      v8 = (int)(float)(v2 / AnimationTimeLength);
      if ( v7 < 0 || (*((_DWORD *)v5 + 127) = v7 - v8, v7 - v8 >= 0) )
        v7 = (int)(float)(v2 / AnimationTimeLength);
      else
        *((_DWORD *)v5 + 127) = 0;
      *((_DWORD *)v5 + 125) = v7;
      CKeyframeAnimation::PrepareSequenceForIteration(v5, v7);
      KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v9 + 360));
      *(_DWORD *)(v10 + 92) = v11;
    }
    return 0;
  }
  return v12;
}
