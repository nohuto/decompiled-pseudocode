/*
 * XREFs of _xxxActivateEnabledPopup@4 @ 0x1A1E3A
 * Callers:
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z @ 0xAB8FC (-xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _DWP_GetEnabledPopup@4 @ 0x1A1D7D (_DWP_GetEnabledPopup@4.c)
 */

int __thiscall xxxActivateEnabledPopup(_DWORD *this)
{
  _DWORD *EnabledPopup; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[2] = 0;
  EnabledPopup = DWP_GetEnabledPopup(this);
  if ( !EnabledPopup || EnabledPopup == *(_DWORD **)(_GetDesktopWindow(this) + 60) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v6[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v6;
  v6[1] = EnabledPopup;
  HMLockObject(EnabledPopup);
  xxxSetWindowPos((int)this, 0, 0, 0, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1();
  return 1;
}
