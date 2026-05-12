/*
 * XREFs of RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00112F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaAdapterStartPowerIo @ 0x1C0014210 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014734 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C00192FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002D590 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EC78 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F13C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0075334 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077BBC (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007846C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078780 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 */

__int64 __fastcall RaidAdapterRaiseIrqlAndExecuteXrb(__int64 a1, __int64 a2)
{
  KIRQL v4; // di

  v4 = KfRaiseIrql(2u);
  LODWORD(a2) = RaidAdapterExecuteXrb(a1, a2);
  KeLowerIrql(v4);
  return (unsigned int)a2;
}
