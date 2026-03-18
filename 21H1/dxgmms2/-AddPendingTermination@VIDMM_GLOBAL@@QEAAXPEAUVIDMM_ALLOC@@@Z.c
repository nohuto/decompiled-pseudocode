/*
 * XREFs of ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002328C
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C0030778 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00232E4 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AddPendingTermination(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  KIRQL v4; // bl

  v4 = KfRaiseIrql(2u);
  VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(this, a2);
  KeLowerIrql(v4);
}
