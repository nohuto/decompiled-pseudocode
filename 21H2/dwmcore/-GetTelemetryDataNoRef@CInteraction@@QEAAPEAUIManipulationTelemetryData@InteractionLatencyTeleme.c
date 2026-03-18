/*
 * XREFs of ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801F27C0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18026473C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1802648B4 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180264EE8 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$?4VCManipulationTelemetryData@InteractionLatencyTelemetry@@@?$ComPtr@UIManipulationTelemetryData@InteractionLatencyTelemetry@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationTelemetryData@InteractionLatencyTelemetry@@@Z @ 0x1801F1794 (--$-4VCManipulationTelemetryData@InteractionLatencyTelemetry@@@-$ComPtr@UIManipulationTelemetryD.c)
 *     ??0CManipulationTelemetryData@InteractionLatencyTelemetry@@QEAA@PEAVCComposition@@I@Z @ 0x1801F1B0C (--0CManipulationTelemetryData@InteractionLatencyTelemetry@@QEAA@PEAVCComposition@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

struct InteractionLatencyTelemetry::IManipulationTelemetryData *__fastcall CInteraction::GetTelemetryDataNoRef(
        CInteraction *this)
{
  __int64 *v1; // rdi
  struct InteractionLatencyTelemetry::IManipulationTelemetryData *result; // rax
  __int64 v4; // rsi
  InteractionLatencyTelemetry::CManipulationTelemetryData *v5; // rax
  InteractionLatencyTelemetry::CManipulationTelemetryData *v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 1728);
  result = (struct InteractionLatencyTelemetry::IManipulationTelemetryData *)*((_QWORD *)this + 216);
  if ( !result )
  {
    v4 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      v5 = (InteractionLatencyTelemetry::CManipulationTelemetryData *)DefaultHeap::AllocClear(0x120uLL);
      if ( !v5 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v6 = InteractionLatencyTelemetry::CManipulationTelemetryData::CManipulationTelemetryData(
             v5,
             *((struct CComposition **)this + 2),
             *(_DWORD *)(v4 + 16));
      Microsoft::WRL::ComPtr<InteractionLatencyTelemetry::IManipulationTelemetryData>::operator=<InteractionLatencyTelemetry::CManipulationTelemetryData>(
        v1,
        (void (__fastcall ***)(_QWORD))v6);
      return (struct InteractionLatencyTelemetry::IManipulationTelemetryData *)*v1;
    }
  }
  return result;
}
