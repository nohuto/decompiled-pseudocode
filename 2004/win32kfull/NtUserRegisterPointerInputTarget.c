/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1C0201780
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _RegisterPointerInputTarget @ 0x1C01F2FA4 (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)Enforced(v9) && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, v13, v14);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 12LL);
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v12 + 16) )
      {
        if ( !a4 || (v16 = *(_QWORD *)(v12 + 40), *(char *)(v16 + 20) >= 0) && *(char *)(v16 + 19) >= 0 )
        {
          if ( a3 - 2 <= 1 )
          {
            v11 = RegisterPointerInputTarget(v12, v13, a3, a4);
            goto LABEL_14;
          }
        }
        v15 = 87LL;
      }
      else
      {
        v15 = 5LL;
      }
      UserSetLastError(v15, v13, v14);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v11;
}
