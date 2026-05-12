/*
 * XREFs of StorFreeContiguousIoResources @ 0x1C0007568
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0011364 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaidUnitFreeResources @ 0x1C0013894 (RaidUnitFreeResources.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002D864 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002DD28 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidDeleteAdapter @ 0x1C002F794 (RaidDeleteAdapter.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048EA0 (RaidUnitCompleteResetRequest.c)
 *     RaFreeRaidResources @ 0x1C004C7A0 (RaFreeRaidResources.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00720D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0077074 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0077388 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorFreeContiguousIoResources(__int64 a1, __int64 a2)
{
  char v2; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 720) && *(_DWORD *)(a1 + 740) == 3 )
  {
    v2 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 712),
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 24),
      a2,
      v2);
  }
  else
  {
    MmFreeContiguousMemory((PVOID)a2);
  }
}
