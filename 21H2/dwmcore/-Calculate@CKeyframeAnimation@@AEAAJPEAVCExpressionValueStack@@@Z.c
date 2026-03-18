/*
 * XREFs of ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004ECF0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EDD4 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetIsComplete@Timer@@QEBA_NXZ @ 0x18004F1FC (-GetIsComplete@Timer@@QEBA_NXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180256AD8 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Calculate(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // r10d
  int v13; // r11d
  float v14; // xmm0_4
  float v15; // xmm0_4
  int v16; // eax
  __m128 v17; // xmm2
  __m128 v18; // rt1
  int v19; // ecx
  int v20; // r10d

  if ( *((char *)this + 572) >= 0 )
    return 0LL;
  if ( (*((_BYTE *)this + 573) & 4) == 0 )
    goto LABEL_4;
  v9 = CKeyframeAnimation::OnAnimationEvent(this, 32LL, a2);
  v11 = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)this + 573) &= ~4u;
LABEL_4:
    KeyframeSequence::Calculate(*((KeyframeSequence **)this + 48), a2);
    v5 = *((_QWORD *)this + 48);
    if ( (*(_BYTE *)(v5 + 140) & 3) != 1 || !Timer::GetIsComplete((Timer *)(v5 + 80)) || *((_DWORD *)this + 141) == 4 )
      return 0LL;
    *((_BYTE *)this + 573) |= 4u;
    if ( !*((_DWORD *)this + 135) )
      goto LABEL_8;
    v14 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
    if ( (LODWORD(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v17 = 0LL;
      v17.m128_f32[0] = (float)(int)v14 - v14;
      v18.m128_f32[0] = FLOAT_N0_5;
      v16 = (int)v14 - _mm_cmple_ss(v17, v18).m128_u32[0];
    }
    else
    {
      v15 = v14 + 6291456.25;
      v16 = (int)(LODWORD(v15) << 10) >> 11;
    }
    v19 = 0;
    while ( 1 )
    {
      ++v19;
      if ( v12 >= 0 )
      {
        if ( v12 <= v16 )
        {
          if ( v12 || *((float *)this + 130) >= 0.0 )
          {
LABEL_26:
            if ( v19 <= v13 )
            {
              *((_DWORD *)this + 135) = v13 - v19;
              goto LABEL_28;
            }
            if ( v13 <= 0 )
            {
LABEL_28:
              if ( !v19 )
                goto LABEL_8;
              *((_DWORD *)this + 133) += v19;
              CKeyframeAnimation::PrepareSequenceForIteration(this, *((_DWORD *)this + 133));
              KeyframeSequence::Repeat(*((KeyframeSequence **)this + 48), v20);
            }
            else
            {
              *((_DWORD *)this + 135) = 0;
LABEL_8:
              *((_BYTE *)this + 572) &= ~0x80u;
              *((_BYTE *)this + 573) |= 2u;
              v6 = CKeyframeAnimation::OnAnimationEvent(this, 1LL, a2);
              v8 = v6;
              if ( v6 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC4Cu, 0LL);
                return v8;
              }
            }
            return 0LL;
          }
          v12 = v16;
        }
        else
        {
          v12 -= v16;
        }
      }
      else
      {
        v12 += v16;
      }
      if ( v12 >= 0 && v12 <= v16 )
        goto LABEL_26;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xBACu, 0LL);
  return v11;
}
