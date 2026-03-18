/*
 * XREFs of WmsgpDisconnect @ 0x1C0280410
 * Callers:
 *     CleanupLogonProcess @ 0x1C000BDC0 (CleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

RPC_STATUS WmsgpDisconnect()
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(gWinLogonRpcHandle);
  if ( !result )
  {
    result = RpcBindingFree(&gWinLogonRpcHandle);
    if ( !result )
      gWinLogonRpcHandle = 0LL;
  }
  return result;
}
