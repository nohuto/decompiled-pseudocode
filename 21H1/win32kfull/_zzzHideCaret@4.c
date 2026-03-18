/*
 * XREFs of _zzzHideCaret@4 @ 0x19FB1F
 * Callers:
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2 (-UT_CaretSet@@YGHPAUtagWND@@@Z.c)
 */

int __thiscall zzzHideCaret(struct tagWND *this)
{
  if ( !UT_CaretSet(this) )
    return 0;
  zzzInternalHideCaret();
  return 1;
}
