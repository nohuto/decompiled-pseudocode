/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C002D480
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0005C84 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 *     RaidpAdapterDpcRoutine @ 0x1C0010AB0 (RaidpAdapterDpcRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0015620 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitFreeResources @ 0x1C0015B28 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C00192FC (RaidPnPPassToMiniPort.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001B9A0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C002DFB4 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EC78 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F13C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C0040580 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C00409C0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortUnitIdleState @ 0x1C0041890 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0041C50 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0041F48 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0044B44 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C0075334 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077BBC (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1) == 0;
}
