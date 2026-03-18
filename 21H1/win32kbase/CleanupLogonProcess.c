/*
 * XREFs of CleanupLogonProcess @ 0x1C000BDC0
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 * Callees:
 *     WmsgpDisconnect @ 0x1C0280410 (WmsgpDisconnect.c)
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
