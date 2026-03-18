/*
 * XREFs of _NtUserRemoteRedrawScreen@0 @ 0x1682E0
 * Callers:
 *     <none>
 * Callees:
 *     _RemoteRedrawScreen@4 @ 0xD2434 (_RemoteRedrawScreen@4.c)
 */

int __stdcall NtUserRemoteRedrawScreen()
{
  int v0; // esi

  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    if ( gnShadowers || _gbConnected )
      v0 = RemoteRedrawScreen();
    else
      v0 = -1073741823;
  }
  else
  {
    v0 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
