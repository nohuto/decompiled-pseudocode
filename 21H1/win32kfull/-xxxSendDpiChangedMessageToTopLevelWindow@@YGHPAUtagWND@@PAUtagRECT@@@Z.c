/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YGHPAUtagWND@@PAUtagRECT@@@Z @ 0xABB6A
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __fastcall xxxSendDpiChangedMessageToTopLevelWindow(_DWORD *a1, int a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v7[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v7[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v7;
  v7[1] = a1;
  HMLockObject(a1);
  xxxSendMessage(a1, *(unsigned __int16 *)(a1[5] + 180) | (*(unsigned __int16 *)(a1[5] + 180) << 16), a2);
  xxxSetWindowPos((int)a1, 0, 0, 0, 0, 0, 55);
  ThreadUnlock1();
  return 1;
}
