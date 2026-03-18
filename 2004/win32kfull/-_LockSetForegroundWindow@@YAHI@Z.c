/*
 * XREFs of ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D2C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     CanForceForeground @ 0x1C00287E0 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LockSetForegroundWindow(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ecx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_13;
  v6 = v1 - 1;
  if ( !v6 )
  {
    if ( CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_q(
          v8,
          v3,
          2,
          37,
          (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          CurrentProcessWin32Process);
      }
      return 1LL;
    }
LABEL_13:
    v7 = 5LL;
    goto LABEL_14;
  }
  if ( v6 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_(v4, v3, 2, 38, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
      return 1LL;
    }
    goto LABEL_13;
  }
  v7 = 87LL;
LABEL_14:
  UserSetLastError(v7, v3, v5);
  return 0LL;
}
