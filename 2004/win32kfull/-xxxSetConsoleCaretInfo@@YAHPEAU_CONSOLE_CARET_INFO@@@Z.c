/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C002ADB0
 * Callers:
 *     xxxConsoleControl @ 0x1C0027F08 (xxxConsoleControl.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[2] = 0LL;
  v2 = ValidateHwnd(*(_QWORD *)a1);
  v3 = v2;
  if ( v2 && (v4 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v4 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v4 + 160) = *((_QWORD *)a1 + 2);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v7[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v7;
    v7[1] = v3;
    HMLockObject(v3);
    xxxWindowEvent(0x800Bu, 4u);
    ThreadUnlock1();
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
