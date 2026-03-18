/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0018DCC
 * Callers:
 *     zzzSetCaretPos @ 0x1C0018BC0 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C001B690 (CaretBlinkProc.c)
 *     _SetCaretBlinkTime @ 0x1C002F330 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C00D68F0 (zzzInternalHideCaret.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 43) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 43) = 0LL;
  }
}
