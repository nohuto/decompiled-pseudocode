/*
 * XREFs of NtUserDwmValidateWindow @ 0x1C003BB60
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C003B608 (LockProcessByClientId.c)
 *     GetDesktopView @ 0x1C003E860 (GetDesktopView.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDwmValidateWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  void *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a2;
  Object = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) && (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
        LOBYTE(v2) = GetDesktopView(ProcessWin32Process, *(_QWORD *)(v7 + 24)) != 0;
      else
        UserSetLastError(5LL);
      ObfDereferenceObject(Object);
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
