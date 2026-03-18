/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801D0FC4
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180215D54 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDFC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801CD000 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801D06C0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801D0CF4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this)
{
  int v1; // eax
  __int64 v3; // r9

  v1 = *((_DWORD *)this + 42);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker::StopCustomAnimations(this, 0);
    CInteractionTracker::DestroyDefaultAnimations(this, 0);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
    CInteractionTracker::SetState((__int64)this, 1, 0LL, v3);
  }
}
