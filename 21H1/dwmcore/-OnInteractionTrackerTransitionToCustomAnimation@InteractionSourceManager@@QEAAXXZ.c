/*
 * XREFs of ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1802153FC
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801D06C0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CDA94 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180214CD4 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation(
        InteractionSourceManager *this)
{
  InteractionSourceManager *v1; // r10

  if ( InteractionSourceManager::HasActiveManipulation(this) )
    InteractionSourceManager::ClearActiveManipulations(v1);
}
