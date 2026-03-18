/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801D0CF4
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801CB5AC (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDBC (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D0F38 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801D0FC4 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801D1014 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2BA4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801D0C54 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimations(CInteractionTracker *this, char a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
    CInteractionTracker::StopCustomAnimation(this, i, a2);
}
