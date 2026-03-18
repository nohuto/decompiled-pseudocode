/*
 * XREFs of ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1802648B4
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180115BBE (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTeleme.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  CInteraction *ActiveInteraction; // rax
  struct CManipulation *ActiveManipulation; // rax
  __int64 v6; // r9

  if ( dword_1803D0EB8 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 0x400000000002LL) )
    {
      ActiveInteraction = InteractionSourceManager::GetActiveInteraction(a1);
      if ( !a2 )
      {
        if ( ActiveInteraction )
        {
          if ( CInteraction::GetTelemetryDataNoRef(ActiveInteraction) )
          {
            ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 16LL))(
              v6,
              ((unsigned __int64)ActiveManipulation + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)ActiveManipulation >> 64));
          }
        }
      }
    }
  }
}
