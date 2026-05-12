/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C002C5C4
 * Callers:
 *     RaidUnitPoFxActivateComponent @ 0x1C0006D14 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C001110C (RaidUnitSetDevicePowerIrp.c)
 *     RaidPnPPassToMiniPort @ 0x1C001510C (RaidPnPPassToMiniPort.c)
 *     RaidCreateUnit @ 0x1C0018588 (RaidCreateUnit.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DE14 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E2D8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C003FB60 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     StorPortUnitIdleState @ 0x1C0040970 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0041454 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0074424 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0077C8C (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(char *)(a1 + 108) < 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5408));
    if ( (*(_BYTE *)(a1 + 109) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5416));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return *(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1;
}
