/*
 * XREFs of ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0116290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     LockProcessByClientId @ 0x1C00283C8 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C00287E0 (CanForceForeground.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  __int64 v2; // rcx
  bool v3; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 ProcessWin32Process; // rdi
  char v10; // al
  int v11; // edx
  int v12; // ecx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // al
  int v18; // edx
  int v19; // ecx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v3 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( !CanForceForeground(CurrentProcessWin32Process) )
    {
      v7 = 5LL;
LABEL_4:
      UserSetLastError(v7, v5, v6);
      return 0LL;
    }
  }
  Object = 0LL;
  if ( (_DWORD)v1 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_q(v19, v18, 2, 36, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v17);
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
      v10 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qq(
        v12,
        v11,
        2,
        35,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
        v10,
        ProcessWin32Process);
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v15 = PsGetCurrentProcessWin32Process(v14);
    if ( (unsigned int)IsDesktopApp(v15)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 52) == PsGetCurrentProcessWin32Process(v16)) )
    {
      v3 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 320), v3);
  }
  return 1LL;
}
