/*
 * XREFs of _ComposeWindowIfNeeded@8 @ 0x1CD56
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _ForceDisplayAffinity@4 @ 0x1A5967 (_ForceDisplayAffinity@4.c)
 *     _SetDisplayAffinity@8 @ 0x1A5988 (_SetDisplayAffinity@8.c)
 * Callees:
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _IsChildWindowDpiBoundaryDesktopComposed@4 @ 0x1CDC8 (_IsChildWindowDpiBoundaryDesktopComposed@4.c)
 *     ?IsDesktopWindowDesktopComposed@@YGHPBUtagWND@@@Z @ 0x1CDDE (-IsDesktopWindowDesktopComposed@@YGHPBUtagWND@@@Z.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 */

int __fastcall ComposeWindowIfNeeded(int a1, int a2)
{
  int v4; // edi
  void *v5; // eax
  int v7; // [esp-4h] [ebp-Ch]
  const struct tagWND *v8; // [esp+0h] [ebp-8h]

  if ( !IsToplevelWindowDesktopComposed(a1)
    && !IsDesktopWindowDesktopComposed(v8)
    && !IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    return 4063234;
  }
  v4 = ComposeWindow((struct tagWND *)a1, 8 * (a2 != 0) + 5);
  DirtyVisRgnTrackers(a1);
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  v5 = (void *)ReferenceDwmApiPort();
  DwmAsyncChildStyleChange(v5, *(_DWORD *)a1, -16, v7);
  return v4;
}
