/*
 * XREFs of _xxxRequestOutOfFullScreenMode@0 @ 0x181663
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 */

int __stdcall xxxRequestOutOfFullScreenMode()
{
  ULONG_PTR v0; // edi
  int v1; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v0 = gspwndFullScreen;
  v1 = 0;
  v5[2] = 0;
  if ( gspwndFullScreen )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v5[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v5;
    v5[1] = v0;
    HMLockObject(v0);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndFullScreen, 0x406u, 0, 0, 0, 0, 0, 1u, 1);
    ThreadUnlock1();
    while ( ghSwitcher )
      xxxSleepThread2(0, 0, 0);
    if ( gspwndFullScreen && _gbFullScreen == 1 )
      return -1073741823;
  }
  return v1;
}
