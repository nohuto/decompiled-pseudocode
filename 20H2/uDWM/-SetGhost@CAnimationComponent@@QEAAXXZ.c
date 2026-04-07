/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180009B1C
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180008DD0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180032778 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800346D4 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000C254 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent(this, 3LL);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 962) = 1;
  }
}
