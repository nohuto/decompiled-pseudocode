/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YGHPAUHWND__@@@Z @ 0x150481
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z @ 0x150504 (-xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __thiscall xxxSendGDIScaledDpiChangedMessage(void *this)
{
  int result; // eax
  _DWORD *v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  result = HMValidateHandleNoSecure((unsigned int)this, 1);
  v2 = (_DWORD *)result;
  if ( result )
  {
    v5[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v5[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v5;
    v5[1] = v2;
    HMLockObject(v2);
    if ( (*(_DWORD *)(v2[5] + 144) & 0x20000000) != 0 )
      xxxSendMessage(v2, 0, 0);
    xxxSetWindowPos((int)v2, 0, 0, 0, 0, 0, 32823);
    ThreadUnlock1();
    return 1;
  }
  return result;
}
