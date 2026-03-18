/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C003A080
 * Callers:
 *     xxxConsoleControl @ 0x1C003B148 (xxxConsoleControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v10[2] = 0LL;
  v2 = ValidateHwnd(*(_QWORD *)a1);
  v3 = v2;
  if ( v2 && (v4 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v4 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v4 + 160) = *((_QWORD *)a1 + 2);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = v3;
    HMLockObject(v3);
    xxxWindowEvent(0x800Bu, 4u);
    ThreadUnlock1(v7, v6, v8);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
