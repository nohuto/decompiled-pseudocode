/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C0004E00
 * Callers:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004DA4 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C0010E40 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0011364 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002C180 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002D864 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002DD28 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C00476D8 (RaUnitStartResetIo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00720D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0077074 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0077388 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     RaidAdapterScatterGatherExecute @ 0x1C0004C34 (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005C20 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C0019E34 (RaidDmaFlushDmaBuffers.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002D2C0 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 */

__int64 __fastcall RaidAdapterExecuteXrb(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rbp
  bool v10; // di
  __int64 v11; // rdx

  if ( !*(_BYTE *)(a1 + 4514) )
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  v5 = a2[21];
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v6 = *(_DWORD *)(v5 + 24);
  else
    v6 = *(_DWORD *)(v5 + 12);
  if ( (*(_BYTE *)(a1 + 4515) & 4) != 0 )
  {
    v8 = a2[13];
    v9 = a1 + 712;
    v10 = (v6 & 0x40) != 0;
    if ( v8 )
    {
      LOBYTE(a3) = v10;
      RaidDmaFlushDmaBuffers(a1 + 712, v8, a3);
    }
    v11 = a2[17];
    if ( v11 )
    {
      LOBYTE(a3) = v10;
      RaidDmaFlushDmaBuffers(v9, v11, a3);
    }
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  if ( !a2[17] )
  {
    if ( (v6 & 0xC0) != 0 )
      return RaidAdapterScatterGatherExecute(a1, (__int64)a2);
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  return RaidAdapterScatterGatherExecuteBidirectionalRequest();
}
