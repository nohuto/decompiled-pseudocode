/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x141881
 * Callers:
 *     _EditionSetForegroundCheckNoActivate@4 @ 0x1419AD (_EditionSetForegroundCheckNoActivate@4.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __thiscall anonymous_namespace_::xxxSetForegroundCheckNoActivate(struct tagWND *this)
{
  struct tagWND *CompositionInputWindowUIOwner; // esi
  char v2; // bl
  int TopLevelWindow; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  bool v6; // bh
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  struct tagWND *v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  CompositionInputWindowUIOwner = this;
  v8 = 0;
  v2 = 0;
  v9 = 0;
  v10 = 0;
  if ( IsIndependentInputWindow(this) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
    v2 = 1;
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)_GetDesktopWindow(CompositionInputWindowUIOwner) )
    return 0;
  TopLevelWindow = _GetTopLevelWindow((int)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow
    || (*(_BYTE *)(*(_DWORD *)(TopLevelWindow + 20) + 19) & 8) != 0
    || (*(_BYTE *)(*((_DWORD *)CompositionInputWindowUIOwner + 5) + 145) & 0x10) != 0 )
  {
    return 0;
  }
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v8;
    v9 = CompositionInputWindowUIOwner;
    HMLockObject(CompositionInputWindowUIOwner);
  }
  v6 = xxxForceForegroundWindowNoRestoreFocus((int)CompositionInputWindowUIOwner, 0);
  if ( v2 )
    ThreadUnlock1();
  return v6;
}
