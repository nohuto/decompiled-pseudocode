/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C002C074
 * Callers:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006784 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C00083F0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C000A730 (RaidStartIoPacket.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     RaidpAdapterDpcRoutine @ 0x1C000DD30 (RaidpAdapterDpcRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0012250 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaidUnitFreeResources @ 0x1C0013894 (RaidUnitFreeResources.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C0018E90 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C002CB9C (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002D864 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002DD28 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C003F090 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C003F4D0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortUnitIdleState @ 0x1C00403A0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0040720 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0040A08 (StorPortUnitPowerNotRequiredStep2.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0043558 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1) == 0;
}
