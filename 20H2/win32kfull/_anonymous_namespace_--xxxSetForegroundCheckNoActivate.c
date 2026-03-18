/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D2140
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01D2340 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0012B08 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  char v2; // di
  __int64 TopLevelWindow; // rax
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // bl
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  CompositionInputWindowUIOwner = a1;
  v2 = 0;
  if ( (unsigned int)IsIndependentInputWindow(a1) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
    v2 = 1;
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    return 0;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow
    || (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 27LL) & 8) != 0
    || (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 233LL) & 0x10) != 0 )
  {
    return 0;
  }
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v11 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v11;
    *((_QWORD *)&v11 + 1) = CompositionInputWindowUIOwner;
    HMLockObject(CompositionInputWindowUIOwner);
  }
  v8 = xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0LL, v4);
  if ( v2 )
    ThreadUnlock1(v7, v6, v9);
  return v8;
}
