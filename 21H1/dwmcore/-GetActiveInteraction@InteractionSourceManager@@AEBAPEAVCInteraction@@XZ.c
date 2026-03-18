/*
 * XREFs of ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180214D4C
 * Callers:
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180215598 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1802155FC (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180215BD0 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180215C64 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

struct CInteraction *__fastcall InteractionSourceManager::GetActiveInteraction(InteractionSourceManager *this)
{
  struct CChainingHelper *ActiveChainingHelper; // rcx
  struct CInteraction *result; // rax

  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper(this);
  result = 0LL;
  if ( ActiveChainingHelper )
    return (struct CInteraction *)*((_QWORD *)ActiveChainingHelper + 5);
  return result;
}
