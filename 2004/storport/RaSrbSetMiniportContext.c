/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C00076EC
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPowerPassToMiniPort @ 0x1C0012B48 (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C0012CB0 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001510C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DE14 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E2D8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0071FE0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0074424 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00772AC (RaidAdapterGetMiniportDumpInfo.c)
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
