/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403F4B90
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140615B5C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x14076DF58 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14078B8CC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14094B5E4 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x14096F348 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
