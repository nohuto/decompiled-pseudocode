/*
 * XREFs of ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D1E50
 * Callers:
 *     <none>
 * Callees:
 *     CanForceForeground @ 0x1C003BA20 (CanForceForeground.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LockSetForegroundWindow(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // ecx

  v3 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_13;
  v8 = v3 - 1;
  if ( !v8 )
  {
    if ( CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_q(
          v10,
          v5,
          2,
          37,
          (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          CurrentProcessWin32Process);
      }
      return 1LL;
    }
LABEL_13:
    v9 = 5LL;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(v6, v5, 2, 38, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
      return 1LL;
    }
    goto LABEL_13;
  }
  v9 = 87LL;
LABEL_14:
  UserSetLastError(v9, v5, v7);
  return 0LL;
}
