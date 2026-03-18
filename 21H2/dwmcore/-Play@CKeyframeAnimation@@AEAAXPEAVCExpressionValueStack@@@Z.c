/*
 * XREFs of ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18004F74C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x18004F7F8 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 */

void __fastcall CKeyframeAnimation::Play(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  char v4; // cl
  char v5; // al
  KeyframeSequence *v6; // rcx
  char v7; // al

  v4 = *((_BYTE *)this + 573);
  if ( (v4 & 1) != 0 )
  {
    v5 = *((_BYTE *)this + 572);
    if ( v5 >= 0 && (v4 & 2) == 0 )
    {
      v6 = (KeyframeSequence *)*((_QWORD *)this + 48);
      *((_BYTE *)this + 572) = v5 | 0x80;
      KeyframeSequence::Play(v6);
    }
  }
  else
  {
    *((_DWORD *)this + 133) = 0;
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::Play(*((KeyframeSequence **)this + 48));
    v7 = *((_BYTE *)this + 573);
    *((_BYTE *)this + 572) |= 0x80u;
    *((_BYTE *)this + 573) = v7 & 0xFC | 1;
    *((_DWORD *)this + 135) = *((_DWORD *)this + 134);
    CKeyframeAnimation::OnAnimationEvent(this, 4LL, a2);
    *((_BYTE *)this + 573) |= 4u;
  }
}
