/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C002D41C
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D54 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C001260C (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C0018A20 (RaidCreateUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C00192FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EC78 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F13C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C0040A80 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     StorPortUnitIdleState @ 0x1C0041890 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0042364 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C0075334 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077BBC (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0079184 (RaidAdapterStopDeviceIrp.c)
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
