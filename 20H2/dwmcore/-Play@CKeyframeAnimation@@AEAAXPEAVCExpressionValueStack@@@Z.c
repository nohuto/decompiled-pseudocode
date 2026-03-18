/*
 * XREFs of ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180027024
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180026F58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800270D0 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180027544 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 */

void __fastcall CKeyframeAnimation::Play(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  char v4; // cl
  char v5; // al
  char v6; // al
  KeyframeSequence *v7; // rcx

  v4 = *((_BYTE *)this + 541);
  if ( (v4 & 1) != 0 )
  {
    v6 = *((_BYTE *)this + 540);
    if ( v6 >= 0 && (v4 & 2) == 0 )
    {
      v7 = (KeyframeSequence *)*((_QWORD *)this + 45);
      *((_BYTE *)this + 540) = v6 | 0x80;
      KeyframeSequence::Play(v7);
    }
  }
  else
  {
    *((_DWORD *)this + 125) = 0;
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::Play(*((KeyframeSequence **)this + 45));
    v5 = *((_BYTE *)this + 541);
    *((_BYTE *)this + 540) |= 0x80u;
    *((_BYTE *)this + 541) = v5 & 0xFC | 1;
    *((_DWORD *)this + 127) = *((_DWORD *)this + 126);
    CKeyframeAnimation::OnAnimationEvent((__int64)this, 4, a2);
    *((_BYTE *)this + 541) |= 4u;
  }
}
