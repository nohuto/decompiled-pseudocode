/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C0020B9C
 * Callers:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     SetDisplayAffinity @ 0x1C0249130 (SetDisplayAffinity.c)
 * Callees:
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0020C48 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  void *v5; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed()
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2)
    || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v3 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v5);
  }
  else
  {
    return 4063234;
  }
  return v3;
}
