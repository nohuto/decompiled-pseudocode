/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180212C2C
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CDD5C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801C8104 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18021237C (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180213348 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
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
