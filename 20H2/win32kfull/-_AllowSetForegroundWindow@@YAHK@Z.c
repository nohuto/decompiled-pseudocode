/*
 * XREFs of ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C01177E0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C003B608 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C003BA20 (CanForceForeground.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // al
  int v21; // edx
  int v22; // ecx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v5 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2, v4);
    if ( !CanForceForeground(CurrentProcessWin32Process) )
    {
      v7 = 5LL;
LABEL_4:
      UserSetLastError(v7, v2, v4);
      return 0LL;
    }
  }
  Object = 0LL;
  if ( (_DWORD)v1 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED, v2, v4);
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_q(v22, v21, 2, 36, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v20);
    }
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  else
  {
    if ( (int)LockProcessByClientId(v1, (PEPROCESS *)&Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      v7 = 87LL;
      goto LABEL_4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED, v2, v4);
      WPP_RECORDER_SF_qq(
        v11,
        4u,
        2u,
        0x23u,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
        v10,
        ProcessWin32Process);
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v16 = PsGetCurrentProcessWin32Process(v14, v13, v15);
    if ( (unsigned int)IsDesktopApp(v16)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 53) == PsGetCurrentProcessWin32Process(v18, v17, v19)) )
    {
      v5 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 320), v5);
  }
  return 1LL;
}
