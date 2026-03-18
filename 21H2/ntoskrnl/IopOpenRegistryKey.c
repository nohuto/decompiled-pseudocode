/*
 * XREFs of IopOpenRegistryKey @ 0x1406DE960
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403B83F0 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x1403CF9A0 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x1403DB834 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403DD580 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140559190 (IopAllowRemoteDASD.c)
 *     IoQueryDeviceDescription @ 0x1406DDED0 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x1406DE008 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1406DE494 (pIoQueryBusDescription.c)
 *     IopLoadUnloadDriver @ 0x1406DE800 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x14084C474 (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14085D4CC (IopSymlinkQueryEnabledClasses.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14093CA08 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
