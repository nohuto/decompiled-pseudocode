/*
 * XREFs of CleanupLogonProcess @ 0x1C0020D00
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0020A78 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C027A410 (WmsgpDisconnect.c)
 */

NTSTATUS CleanupLogonProcess()
{
  NTSTATUS result; // eax

  if ( gWinLogonRpcHandle )
  {
    result = WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  if ( ghSMSS )
  {
    result = ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  return result;
}
