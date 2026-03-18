/*
 * XREFs of ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0x7DBAC
 * Callers:
 *     __SetCaretBlinkTime@4 @ 0x7DA40 (__SetCaretBlinkTime@4.c)
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     _CaretBlinkProc@16 @ 0x19FA86 (_CaretBlinkProc@16.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

void __fastcall RemoveCaretTimer(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 252) )
  {
    FindTimer(2, 1, 0);
    *(_DWORD *)(a2 + 252) = 0;
  }
}
