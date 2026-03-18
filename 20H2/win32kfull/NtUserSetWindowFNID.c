/*
 * XREFs of NtUserSetWindowFNID @ 0x1C00C5070
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z @ 0x1C00BC6D4 (--9-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAEAEBI@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
    v6 = *(_QWORD *)(v9 + 16);
    if ( *(_QWORD *)(v6 + 424) != CurrentProcessWin32Process )
    {
      v11 = 5LL;
LABEL_4:
      UserSetLastError(v11);
      goto LABEL_16;
    }
    if ( a2 != 0x4000 )
    {
      if ( (unsigned int)IsWindowBeingDestroyed(v9) )
      {
LABEL_7:
        v11 = 87LL;
        goto LABEL_4;
      }
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 != 681 )
          goto LABEL_7;
      }
      else if ( (unsigned __int16)(a2 - 673) > 9u )
      {
        goto LABEL_7;
      }
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0 )
        goto LABEL_7;
      v16 = 0;
      if ( tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(v9 + 321, &v16) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v12, v13, v14);
        goto LABEL_7;
      }
    }
    v8 = 1LL;
    *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) |= a2;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
