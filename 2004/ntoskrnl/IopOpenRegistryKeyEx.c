/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14078C2D0
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B4188 (PnpBootDeviceWait.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A4B97C (PipInitializeEarlyLaunchDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A4CF70 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A4D0A4 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A4D318 (PiInitCacheGroupInformation.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A4D924 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A4DEB4 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     IopStoreSystemPartitionInformation @ 0x140A66F78 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
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
