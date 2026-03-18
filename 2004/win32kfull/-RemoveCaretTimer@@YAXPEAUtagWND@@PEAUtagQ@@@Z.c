/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C005FED0
 * Callers:
 *     _SetCaretBlinkTime @ 0x1C003DB40 (_SetCaretBlinkTime.c)
 *     zzzInternalHideCaret @ 0x1C005FE40 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0112850 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C0119F70 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 43) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 43) = 0LL;
  }
}
