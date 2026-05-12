/*
 * XREFs of RaidZeroXrb @ 0x1C000AFC0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006758 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008D50 (StorRemoveIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x1C000AEF4 (StorSubmitIoGatewayItem.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00112F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterRestartQueues @ 0x1C001362C (RaidAdapterRestartQueues.c)
 *     RaAdapterStartPowerIo @ 0x1C0014210 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014734 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C0018C10 (RaidUnitAllocateResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C00192FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EC78 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002F13C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004BCC4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0075334 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077BBC (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007846C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078780 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 */

char __fastcall RaidZeroXrb(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v4; // rdi
  char v6; // al
  char result; // al

  *(_BYTE *)(a1 + 16) &= 0x9Cu;
  v4 = *(_QWORD *)(a1 + 784);
  *(_WORD *)(a1 + 18) = -1;
  v6 = *(_BYTE *)(a1 + 16);
  *(_DWORD *)a1 = 523124044;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 744) = a3;
  *(_QWORD *)(a1 + 760) = a4;
  if ( a4 )
  {
    memset(a4, 0, a3);
    v6 = *(_BYTE *)(a1 + 16);
  }
  result = v6 & 0x7F;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_BYTE *)(a1 + 17) &= 0xF0u;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  *(_BYTE *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 784) = v4;
  return result;
}
