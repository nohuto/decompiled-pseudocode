/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1407934A0
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B3664 (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     IopStoreSystemPartitionInformation @ 0x140A54148 (IopStoreSystemPartitionInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A54518 (PipInitializeEarlyLaunchDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A55B0C (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140A55C40 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x140A55EB4 (PiInitCacheGroupInformation.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A564C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A56A50 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
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
