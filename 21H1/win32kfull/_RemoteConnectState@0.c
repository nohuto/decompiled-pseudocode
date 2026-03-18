/*
 * XREFs of _RemoteConnectState@0 @ 0xA4A72
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RemoteConnectState()
{
  int v0; // ecx

  v0 = 0;
  if ( _gbNonServiceSession )
  {
    if ( _gbVideoInitialized )
    {
      if ( _gbExitInProgress )
        return 2;
      else
        return 4 - (_gbConnected != 0);
    }
    else
    {
      return 1;
    }
  }
  return v0;
}
