/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C000B2B0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000B814 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreePointerDeviceClientList @ 0x1C000B310 (FreePointerDeviceClientList.c)
 */

int __fastcall InitializePointerDevicesPresenceState(int a1)
{
  struct _LIST_ENTRY *v1; // rax

  if ( a1 )
  {
    v1 = &gPointerDeviceClients;
    qword_1C033A6D8 = (__int64)&gPointerDeviceClients;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
  }
  else
  {
    LODWORD(v1) = FreePointerDeviceClientList();
    if ( ghPntrProcRunningEvent )
      LODWORD(v1) = NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      LODWORD(v1) = NtClose(ghPntrProcRequestEvent);
  }
  return (int)v1;
}
