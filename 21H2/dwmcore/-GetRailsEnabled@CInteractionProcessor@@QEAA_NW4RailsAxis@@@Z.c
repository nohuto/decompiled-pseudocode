/*
 * XREFs of ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801119AC
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@PEAW4PointerResult@@@Z @ 0x18018D7E0 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@AEAUInteractionOutput@@@Z @ 0x18018E2A8 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018E5D0 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801F22B0 (-GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::GetRailsEnabled(__int64 a1, int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (*(_BYTE *)(a1 + 148) & 0x40) != 0;
  if ( a2 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  return *(_BYTE *)(a1 + 148) >> 7;
}
