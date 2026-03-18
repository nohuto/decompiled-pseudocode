/*
 * XREFs of NtUserRegisterShellPTPListener @ 0x1C0127640
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C00288E8 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _RegisterShellPTPListener @ 0x1C0127708 (_RegisterShellPTPListener.c)
 */

__int64 __fastcall NtUserRegisterShellPTPListener(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // rcx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
      if ( !a2 || (v13 = *(_QWORD *)(v9 + 40), *(char *)(v13 + 20) >= 0) && *(char *)(v13 + 19) >= 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v11) )
        {
          v8 = RegisterShellPTPListener(v9, a2);
          goto LABEL_8;
        }
      }
      UserSetLastError(87LL, v10, v12);
      v15 = 87LL;
    }
    else
    {
      v15 = 5LL;
    }
    UserSetLastError(v15, v10, v12);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
