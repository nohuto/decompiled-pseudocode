/*
 * XREFs of _NtUserDwmValidateWindow@8 @ 0xC8888
 * Callers:
 *     <none>
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

BOOL __stdcall NtUserDwmValidateWindow(int a1, HANDLE ProcessId)
{
  BOOL v2; // esi
  int v3; // edi
  int CurrentProcess; // eax
  int ProcessWin32Process; // eax
  PVOID Object; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  Object = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( IsProcessDwm(CurrentProcess) && LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        v2 = GetDesktopView(ProcessWin32Process, *(_DWORD *)(v3 + 12)) != 0;
      else
        UserSetLastError((struct _NT_TIB *)5);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
