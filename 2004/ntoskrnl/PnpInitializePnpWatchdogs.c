/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x140A51BD0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1403B438C (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140A51C6C (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A51CD0 (PnpOpenCCSPnpRegKey.c)
 */

NTSTATUS PnpInitializePnpWatchdogs()
{
  NTSTATUS result; // eax
  int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  result = PnpOpenCCSPnpRegKey(&Handle);
  if ( result >= 0 )
  {
    v2 = 0;
    if ( (int)PnpGetRegistryDword(Handle, (__int64)L"WatchdogBugcheckEnabled", &v2) >= 0 )
      v1 = v2 != 0;
    else
      v1 = 2;
    PnpWatchdogBugcheckConfig = v1;
    PnpQueryWatchdogTimeoutConfiguration(Handle);
    return ZwClose(Handle);
  }
  return result;
}
