/*
 * XREFs of IopOpenRegistryKey @ 0x140769C64
 * Callers:
 *     IopReadDumpRegistry @ 0x1403C03A0 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403CA028 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CC6F8 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CE530 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140507990 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     IopLoadUnloadDriver @ 0x1407809E0 (IopLoadUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x14078AD24 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14078B1B0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x1407B3F54 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1407CDD6C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140898620 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+10h] BYREF

  v6.ObjectName = a3;
  *(_QWORD *)&v6.Length = 48LL;
  *(_QWORD *)&v6.Attributes = 576LL;
  v6.RootDirectory = a2;
  Disposition = 0;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &v6, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &v6);
}
