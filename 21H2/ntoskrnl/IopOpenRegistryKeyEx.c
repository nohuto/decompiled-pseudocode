/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1407AC850
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B8524 (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A5C484 (PipInitializeEarlyLaunchDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5DA78 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A5DBAC (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A5DE20 (PiInitCacheGroupInformation.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5E42C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A5E9BC (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 *     IopStoreSystemPartitionInformation @ 0x140A625B8 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
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
