/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180041060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180222910 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EDD4 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18004F554 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18006FE60 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180070568 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  KeyframeSequence *v5; // rcx
  int v6; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r10d

  if ( (*((_BYTE *)this + 573) & 1) == 0 )
  {
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  if ( !a2 )
    goto LABEL_3;
  v8 = *((_DWORD *)this + 142);
  if ( v8 == 1 )
  {
    *((_DWORD *)this + 121) = *((_DWORD *)this + 120);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 48));
    *(_DWORD *)(v11 + 92) = 0;
  }
  else if ( v8 == 2 )
  {
    *((_DWORD *)this + 121) = *((_DWORD *)this + 120);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v12 = *((_DWORD *)this + 134);
    v13 = 0;
    if ( v12 >= 1 )
      v13 = v12 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v13);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 48));
    *(_DWORD *)(v14 + 92) = v15;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 48), a3);
  v9 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 48));
  v6 = v9;
  if ( v9 >= 0 )
  {
LABEL_3:
    v5 = (KeyframeSequence *)*((_QWORD *)this + 48);
    if ( (*((_BYTE *)v5 + 140) & 1) != 0 )
      KeyframeSequence::Stop(v5);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x994u, 0LL);
LABEL_6:
  *((_BYTE *)this + 572) &= ~0x80u;
  *((_BYTE *)this + 573) &= 0xF8u;
  *((_DWORD *)this + 121) = 0;
  if ( v6 >= 0 )
    CKeyframeAnimation::OnAnimationEvent((__int64)this, 2, a3);
  return (unsigned int)v6;
}
