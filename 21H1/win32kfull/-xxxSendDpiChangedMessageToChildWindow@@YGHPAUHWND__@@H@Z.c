/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YGHPAUHWND__@@H@Z @ 0x1503E5
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned int a1, int a2)
{
  int v3; // eax
  void *v4; // esi
  int v5; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = HMValidateHandleNoSecure(a1, 1);
  v4 = (void *)v3;
  if ( !v3 )
    return 0;
  v5 = *(_DWORD *)(v3 + 20);
  if ( (*(_DWORD *)(v5 + 184) & 0xF) != 2 || *(_WORD *)(v5 + 182) )
    return 0;
  v9[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v9[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v9;
  v9[1] = v4;
  HMLockObject(v4);
  xxxSendMessage(v4, 0, 0);
  if ( a2 )
    xxxSetWindowPos((int)v4, 0, 0, 0, 0, 0, 55);
  ThreadUnlock1();
  return 1;
}
