/*
 * XREFs of IopOpenRegistryKey @ 0x140766324
 * Callers:
 *     IopReadDumpRegistry @ 0x1403BF720 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C92E8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CBBB8 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CD9E0 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140505E90 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     IopBootLog @ 0x14076D764 (IopBootLog.c)
 *     IopLoadUnloadDriver @ 0x14077CA40 (IopLoadUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x140786D84 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140787210 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140787324 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x1407941A4 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1407C993C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x140894964 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14089AEF0 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
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
