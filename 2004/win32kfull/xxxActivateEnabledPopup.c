/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C000725C
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0007320 (DWP_GetEnabledPopup.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C011ABE4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF

  v5[2] = 0LL;
  EnabledPopup = (struct tagWND *)DWP_GetEnabledPopup();
  if ( !EnabledPopup || EnabledPopup == *(struct tagWND **)(GetDesktopWindow(a1) + 112) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v5;
  v5[1] = EnabledPopup;
  HMLockObject(EnabledPopup);
  xxxSetWindowPos(a1, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1();
  return 1LL;
}
