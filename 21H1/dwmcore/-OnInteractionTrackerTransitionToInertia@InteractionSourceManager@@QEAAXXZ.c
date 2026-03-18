/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1802155FC
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801D06C0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801CAA34 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180214D4C (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180215D18 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  _OWORD *v2; // rax
  __int64 v3; // r9
  float v4; // xmm3_4

  if ( InteractionSourceManager::GetActiveInteraction(this) )
  {
    v2 = (_OWORD *)((char *)InteractionSourceManager::TryGetActiveManipulation(this) + 384);
    LODWORD(v4) = HIDWORD(*(_QWORD *)v2);
    if ( COERCE_FLOAT(*v2) != 0.0 || v4 != 0.0 )
      CInteraction::ReportInertiaStart(v3, HIDWORD(*((_QWORD *)v2 + 4)), COERCE_FLOAT(*v2), v4);
  }
}
