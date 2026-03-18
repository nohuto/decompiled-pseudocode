/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1C012AB90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _RegisterPointerDeviceNotifications @ 0x1C012AC64 (_RegisterPointerDeviceNotifications.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+44h] [rbp+1Ch]

  v15 = -1;
  v14 = 0x2000;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
    v6 = *(_QWORD *)(v9 + 16);
    if ( *(_QWORD *)(v6 + 424) == CurrentProcessWin32Process )
    {
      if ( a2 && !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v14) )
      {
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 9LL);
        UserSetLastError(5LL, v12, v13);
      }
      else
      {
        v8 = RegisterPointerDeviceNotifications(v9, a2);
      }
    }
    else
    {
      v8 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
