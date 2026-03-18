/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180024770
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180023E40 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180024324 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180024594 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180024C20 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180026630 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180026F58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180027144 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180027544 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x180027740 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edi
  KeyframeSequence *v9; // rcx
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // r11d
  __int64 v15; // rcx

  if ( (*((_BYTE *)this + 541) & 1) == 0 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_6;
  v5 = *((_DWORD *)this + 134);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 113) = *((_DWORD *)this + 112);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 45));
    *(_DWORD *)(v15 + 92) = 0;
  }
  else if ( v5 == 2 )
  {
    *((_DWORD *)this + 113) = *((_DWORD *)this + 112);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v11 = *((_DWORD *)this + 126);
    v12 = 0;
    if ( v11 >= 1 )
      v12 = v11 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v12);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 45));
    *(_DWORD *)(v13 + 92) = v14;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 45), a3);
  v6 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 45));
  v8 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v9 = (KeyframeSequence *)*((_QWORD *)this + 45);
    if ( (*((_BYTE *)v9 + 140) & 1) != 0 )
      KeyframeSequence::Stop(v9);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x965u, 0LL);
LABEL_9:
  *((_BYTE *)this + 540) &= ~0x80u;
  *((_BYTE *)this + 541) &= 0xF8u;
  *((_DWORD *)this + 113) = 0;
  if ( v8 >= 0 )
    CKeyframeAnimation::OnAnimationEvent(this, 2LL, a3);
  return (unsigned int)v8;
}
