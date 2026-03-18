/*
 * XREFs of _zzzShowCaret@4 @ 0x19FB39
 * Callers:
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2 (-UT_CaretSet@@YGHPAUtagWND@@@Z.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 */

int __thiscall zzzShowCaret(struct tagWND *this)
{
  if ( !UT_CaretSet(this) )
    return 0;
  zzzInternalShowCaret();
  return 1;
}
