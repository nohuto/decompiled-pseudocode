/*
 * XREFs of ?_LockSetForegroundWindow@@YGHI@Z @ 0x141663
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _LockSetForegroundWindow(unsigned int a1)
{
  _DWORD *CurrentProcessWin32Process; // esi
  int v2; // edx
  int v3; // ecx

  CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
  if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_13;
  if ( a1 == 1 )
  {
    if ( CanForceForeground(CurrentProcessWin32Process) && !_gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_q(
          v3,
          v2,
          2u,
          37,
          (int)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          (char)CurrentProcessWin32Process);
      }
      return 1;
    }
LABEL_13:
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  if ( a1 == 2 )
  {
    if ( CurrentProcessWin32Process == (_DWORD *)_gppiLockSFW )
    {
      _gppiLockSFW = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(2, 38, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      return 1;
    }
    goto LABEL_13;
  }
  UserSetLastError((struct _NT_TIB *)0x57);
  return 0;
}
