/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C0200BE0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C0157B24 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v4 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v5 = RemoteRedrawScreen(gpepCSRSS);
    else
      v5 = -1073741823;
  }
  else
  {
    v5 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
