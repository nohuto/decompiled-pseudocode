/*
 * XREFs of StorFreeContiguousIoResources @ 0x1C0007B58
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00131D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001510C (RaidPnPPassToMiniPort.c)
 *     RaidUnitFreeResources @ 0x1C0015704 (RaidUnitFreeResources.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DE14 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E2D8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidDeleteAdapter @ 0x1C002FD44 (RaidDeleteAdapter.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00495B0 (RaidUnitCompleteResetRequest.c)
 *     RaFreeRaidResources @ 0x1C004CEB0 (RaFreeRaidResources.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0071FE0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0074424 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0076F98 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00772AC (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
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
