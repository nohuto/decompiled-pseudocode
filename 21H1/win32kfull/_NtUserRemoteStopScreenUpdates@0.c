/*
 * XREFs of _NtUserRemoteStopScreenUpdates@0 @ 0x168334
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 */

int __stdcall NtUserRemoteStopScreenUpdates()
{
  int v0; // esi

  EnterCrit(0, 1);
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    if ( _gfSwitchInProgress )
      v0 = -1073741823;
    else
      v0 = xxxRemoteStopScreenUpdates();
  }
  else
  {
    v0 = -1073741790;
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
