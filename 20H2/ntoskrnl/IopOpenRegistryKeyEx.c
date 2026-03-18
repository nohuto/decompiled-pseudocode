/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1407A2580
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B6E24 (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     IopStoreSystemPartitionInformation @ 0x140A5A548 (IopStoreSystemPartitionInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A5A918 (PipInitializeEarlyLaunchDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5BF0C (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A5C040 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A5C2B4 (PiInitCacheGroupInformation.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5C8C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A5CE50 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a1 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, a4, &v5);
}
