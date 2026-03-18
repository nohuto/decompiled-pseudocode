/*
 * XREFs of ZwQueryDirectoryObject @ 0x1403FA9F0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405FDDF0 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x14077E968 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140799EDC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x140952744 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140A5E798 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
