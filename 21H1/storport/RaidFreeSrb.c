/*
 * XREFs of RaidFreeSrb @ 0x1C00136DC
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00720D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0077074 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0077388 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeSrb(void *a1)
{
  ExFreePoolWithTag(a1, 0x72536152u);
}
