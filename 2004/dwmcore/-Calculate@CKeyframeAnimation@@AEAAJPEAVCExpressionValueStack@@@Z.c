/*
 * XREFs of ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18008B82C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18008A980 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x18001A0BC (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180089BB4 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18008B2F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetIsComplete@Timer@@QEBA_NXZ @ 0x18008B9FC (-GetIsComplete@Timer@@QEBA_NXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18008BC00 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18008C1EC (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Calculate(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // r11d
  float v13; // xmm0_4
  float v14; // xmm0_4
  int v15; // eax
  int v16; // ecx
  bool v17; // sf
  int v18; // r11d
  __m128 v19; // xmm2
  __m128 v20; // rt1

  if ( *((char *)this + 540) >= 0 )
    return 0;
  if ( (*((_BYTE *)this + 541) & 4) != 0 )
  {
    v9 = CKeyframeAnimation::OnAnimationEvent(this, 32LL, a2);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xAFAu, 0LL);
      return v5;
    }
    *((_BYTE *)this + 541) &= ~4u;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 45), a2);
  v4 = *((_QWORD *)this + 45);
  if ( (*(_BYTE *)(v4 + 140) & 3) != 1 || !Timer::GetIsComplete((Timer *)(v4 + 80)) || *((_DWORD *)this + 133) == 4 )
    return 0;
  *((_BYTE *)this + 541) |= 4u;
  if ( !*((_DWORD *)this + 127) )
    goto LABEL_9;
  v13 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v19 = 0LL;
    v19.m128_f32[0] = (float)(int)v13 - v13;
    v20.m128_f32[0] = FLOAT_N0_5;
    v15 = (int)v13 - _mm_cmple_ss(v19, v20).m128_u32[0];
  }
  else
  {
    v14 = v13 + 6291456.25;
    v15 = (int)(LODWORD(v14) << 10) >> 11;
  }
  v16 = 0;
  do
  {
    while ( 1 )
    {
      ++v16;
      if ( v12 < 0 )
      {
        v12 += v15;
        goto LABEL_34;
      }
      if ( v12 > v15 )
      {
        v12 -= v15;
        goto LABEL_34;
      }
      v17 = v12 < 0;
      if ( !v12 )
        break;
LABEL_19:
      if ( !v17 )
        goto LABEL_20;
    }
    if ( *((float *)this + 122) < 0.0 )
    {
      v12 = v15;
LABEL_34:
      v17 = v12 < 0;
      goto LABEL_19;
    }
LABEL_20:
    ;
  }
  while ( v12 > v15 );
  if ( v16 <= v11 )
  {
    *((_DWORD *)this + 127) = v11 - v16;
  }
  else if ( v11 > 0 )
  {
    v16 = 0;
    *((_DWORD *)this + 127) = 0;
  }
  if ( v16 )
  {
    *((_DWORD *)this + 125) += v16;
    CKeyframeAnimation::PrepareSequenceForIteration(this, *((_DWORD *)this + 125));
    KeyframeSequence::Repeat(*((KeyframeSequence **)this + 45), v18);
    return 0;
  }
LABEL_9:
  *((_BYTE *)this + 540) &= ~0x80u;
  *((_BYTE *)this + 541) |= 2u;
  v7 = CKeyframeAnimation::OnAnimationEvent(this, 1LL, a2);
  v5 = v7;
  if ( v7 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xB9Au, 0LL);
  return v5;
}
