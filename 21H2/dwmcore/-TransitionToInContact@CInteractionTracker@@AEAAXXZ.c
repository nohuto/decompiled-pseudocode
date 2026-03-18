/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18021E39C
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18026503C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802194C8 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021E0BC (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 44);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker::BoostCompositorClock(this, 1);
    CInteractionTracker::StopCustomAnimations(this, 0);
    CInteractionTracker::DestroyDefaultAnimations(this, 0);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
    CInteractionTracker::SetState((__int64)this, 1, 0);
  }
}
