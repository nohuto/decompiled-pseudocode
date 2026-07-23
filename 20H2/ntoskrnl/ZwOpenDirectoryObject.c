/*
 * XREFs of ZwOpenDirectoryObject @ 0x1403F8C70
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1405FDDF0 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x14077E968 (BiGetNtPartitionPath.c)
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140799EDC (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x140952744 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140982DB0 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140A5E798 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
