/*
 * XREFs of IopOpenRegistryKey @ 0x140769AA4
 * Callers:
 *     IopReadDumpRegistry @ 0x1403BFF74 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C9E88 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CC588 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CE3C0 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140507A10 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     IopBootLog @ 0x140771A20 (IopBootLog.c)
 *     IopLoadUnloadDriver @ 0x140780820 (IopLoadUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x14078AB64 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14078AFF0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B104 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x1407B3DB4 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1407CDBFC (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x140891F24 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1408984C0 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA740 (ZwCreateKey.c)
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
