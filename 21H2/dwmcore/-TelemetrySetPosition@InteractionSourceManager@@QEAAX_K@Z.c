/*
 * XREFs of ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180264EE8
 * Callers:
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x18021E100 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180113E5C (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180115BBE (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTeleme.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::TelemetrySetPosition(InteractionSourceManager *this, __int64 a2)
{
  CInteraction *v4; // r10
  struct InteractionLatencyTelemetry::IManipulationTelemetryData *TelemetryDataNoRef; // rdi
  struct CManipulation *ActiveManipulation; // rax

  InteractionSourceManager::GetActiveInteraction(this);
  if ( InteractionSourceManager::HasActiveManipulation(this) && v4 && a2 )
  {
    TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(v4);
    if ( TelemetryDataNoRef )
    {
      ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
      (*(void (__fastcall **)(struct InteractionLatencyTelemetry::IManipulationTelemetryData *, _QWORD, _QWORD, __int64))(*(_QWORD *)TelemetryDataNoRef + 24LL))(
        TelemetryDataNoRef,
        ((unsigned __int64)ActiveManipulation + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)ActiveManipulation >> 64),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL),
        a2);
    }
  }
}
