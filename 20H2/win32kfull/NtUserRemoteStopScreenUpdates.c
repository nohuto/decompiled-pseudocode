/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C0200C60
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C011FBB0 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int16 v4; // dx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v5 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gfSwitchInProgress )
      v6 = -1073741823;
    else
      v6 = xxxRemoteStopScreenUpdates(gpepCSRSS, v4);
  }
  else
  {
    v6 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
