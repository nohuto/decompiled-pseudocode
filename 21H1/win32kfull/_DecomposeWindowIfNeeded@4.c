/*
 * XREFs of _DecomposeWindowIfNeeded@4 @ 0x1B7B8
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _IsChildWindowDpiBoundaryDesktopComposed@4 @ 0x1CDC8 (_IsChildWindowDpiBoundaryDesktopComposed@4.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 */

int __thiscall DecomposeWindowIfNeeded(int this)
{
  int v2; // edi
  int v4; // [esp-4h] [ebp-10h]

  if ( !IsToplevelWindowDesktopComposed(this) && !IsChildWindowDpiBoundaryDesktopComposed(this) )
    return 4063234;
  v2 = ComposeWindow((struct tagWND *)this);
  DirtyVisRgnTrackers(this);
  v4 = *(_DWORD *)(*(_DWORD *)(this + 20) + 20);
  ReferenceDwmApiPort();
  DwmAsyncChildStyleChange(-16, v4);
  return v2;
}
