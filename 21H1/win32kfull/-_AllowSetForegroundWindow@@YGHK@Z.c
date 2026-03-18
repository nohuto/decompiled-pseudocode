/*
 * XREFs of ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _AllowSetForegroundWindow(HANDLE ProcessId)
{
  _DWORD *CurrentProcessWin32Process; // eax
  int ProcessWin32Process; // edi
  char v4; // al
  int v5; // edx
  int v6; // ecx
  struct tagTHREADINFO *PtiLastWokenHotKey; // ebx
  int v8; // eax
  char v9; // al
  int v10; // edx
  int v11; // ecx
  PVOID Object; // [esp+8h] [ebp-4h] BYREF
  bool ProcessIda; // [esp+14h] [ebp+8h]

  if ( IAMThreadAccessGranted(_gptiCurrent) )
  {
    _gppiLockSFW = 0;
  }
  else
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
    if ( !CanForceForeground(CurrentProcessWin32Process) )
    {
      UserSetLastError((struct _NT_TIB *)5);
      return 0;
    }
  }
  Object = 0;
  if ( ProcessId == (HANDLE)-1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = PsGetCurrentProcessWin32Process();
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_q(v11, v10, 2u, 36, (int)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v9);
    }
    CInputGlobals::ClearPtiLastWoken(_gpInputGlobals);
  }
  else
  {
    if ( LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
      return 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = PsGetCurrentProcessWin32Process();
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qq(v6, v5, 2u, 35, (int)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v4, ProcessWin32Process);
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(_gpInputGlobals);
    v8 = PsGetCurrentProcessWin32Process();
    ProcessIda = IsDesktopApp(v8)
              && (!PtiLastWokenHotKey || *((_DWORD *)PtiLastWokenHotKey + 58) == PsGetCurrentProcessWin32Process());
    CInputGlobals::SetPtiLastWoken(_gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 180), ProcessIda);
  }
  return 1;
}
