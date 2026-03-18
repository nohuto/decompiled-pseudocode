/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YGHPAU_CONSOLE_CARET_INFO@@@Z @ 0x1B6CC
 * Callers:
 *     _xxxConsoleControl@12 @ 0x1A9EA (_xxxConsoleControl@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall xxxSetConsoleCaretInfo(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v8[2] = 0;
  v2 = ValidateHwnd(*this);
  v3 = v2;
  if ( v2 && (v4 = *(_DWORD *)(v2 + 12)) != 0 )
  {
    qmemcpy((void *)(v4 + 72), this, 0x14u);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v8;
    v8[1] = v3;
    HMLockObject(v3);
    xxxWindowEvent(32779, v3, -8, 0, 4);
    ThreadUnlock1();
    return 1;
  }
  else
  {
    UserSetLastError(87);
    return 0;
  }
}
