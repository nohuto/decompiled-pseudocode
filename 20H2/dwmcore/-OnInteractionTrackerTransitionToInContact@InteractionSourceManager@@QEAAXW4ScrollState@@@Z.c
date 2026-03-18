/*
 * XREFs of ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180210D64
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CBF4C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x1801C5884 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180210518 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1802114E4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

CInteraction *__fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  CInteraction *result; // rax
  struct CManipulation *ActiveManipulation; // rax
  __int64 v6; // r9

  result = InteractionSourceManager::GetActiveInteraction(a1);
  if ( !a2 && result )
  {
    result = CInteraction::GetTelemetryDataNoRef(result);
    if ( result )
    {
      ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
      return (CInteraction *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 16LL))(
                               v6,
                               ((unsigned __int64)ActiveManipulation + 64) & -(__int64)(ActiveManipulation != 0LL));
    }
  }
  return result;
}
