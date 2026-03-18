/*
 * XREFs of ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801F27C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@PEAW4PointerResult@@@Z @ 0x18018D7E0 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTeleme.c)
 */

__int64 __fastcall CInteraction::ProcessHandledInteractions(
        _QWORD *a1,
        __int64 a2,
        bool a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  struct InteractionLatencyTelemetry::IManipulationTelemetryData *TelemetryDataNoRef; // rax
  struct InteractionLatencyTelemetry::IManipulationTelemetryData *v12; // r14

  v6 = 0;
  if ( a6 )
    *a6 = 1;
  if ( a1[26] )
  {
    TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef((CInteraction *)(a1 - 8));
    v12 = TelemetryDataNoRef;
    if ( a3 && TelemetryDataNoRef )
    {
      a5[45] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 120LL))(a1, *a5);
      (*(void (__fastcall **)(struct InteractionLatencyTelemetry::IManipulationTelemetryData *, unsigned int *))(*(_QWORD *)v12 + 40LL))(
        v12,
        a5);
    }
    return (unsigned int)CInteractionProcessor::ProcessHandledInteractions(
                           (__int64)(a1 + 36),
                           (struct IManipulationResource *)((a1[26] + 72LL) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[26] >> 64)),
                           a2,
                           a3,
                           a4,
                           v12,
                           a6);
  }
  return v6;
}
