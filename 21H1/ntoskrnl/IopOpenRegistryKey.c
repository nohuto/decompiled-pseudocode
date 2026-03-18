/*
 * XREFs of IopOpenRegistryKey @ 0x140754D5C
 * Callers:
 *     IopReadDumpRegistry @ 0x1403BBF80 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C58E8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403C8168 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403C9FE4 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140505210 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     IopBootLog @ 0x14075CC40 (IopBootLog.c)
 *     IopLoadUnloadDriver @ 0x14076B870 (IopLoadUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x140776374 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140776800 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140776914 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x14079BA94 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1407B7F3C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140893F20 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
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
