/*
 * XREFs of IopOpenRegistryKey @ 0x1407576E4
 * Callers:
 *     IopReadDumpRegistry @ 0x1403BD2A0 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C6858 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403C8F78 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CADC4 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140505860 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     IopLoadUnloadDriver @ 0x14076E010 (IopLoadUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x140778784 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140778C10 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140778D24 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x140786494 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1407BB0AC (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140895240 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
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
