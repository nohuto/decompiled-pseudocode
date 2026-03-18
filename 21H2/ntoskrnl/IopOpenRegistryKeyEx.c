/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14082EF44
 * Callers:
 *     PnpBootDeviceWait @ 0x1403C5C64 (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     IopStoreSystemPartitionInformation @ 0x140B0E88C (IopStoreSystemPartitionInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140B0EFD8 (PipInitializeEarlyLaunchDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B10490 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140B107D8 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140B10A4C (PiInitCacheGroupInformation.c)
 *     PipInitializeCoreDriversByGroup @ 0x140B10D98 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B1131C (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
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
