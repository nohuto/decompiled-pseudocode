/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C004E868
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0020C48 (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  void *v3; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) || (unsigned int)IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1);
    DirtyVisRgnTrackers(a1);
    v3 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5));
    DwmAsyncChildStyleChange(v3);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
