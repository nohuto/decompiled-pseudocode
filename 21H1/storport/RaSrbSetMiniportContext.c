/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C00070FC
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPowerPassToMiniPort @ 0x1C0010CD8 (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C0010E40 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002D864 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002DD28 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00720D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0077388 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 452) + 7);
  if ( (result & 0xFFFFFFF8) != 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_QWORD *)(a2 + 104) = a3;
    else
      *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
