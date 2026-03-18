/*
 * XREFs of zzzInternalHideCaret @ 0x1C00D68F0
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     NtUserHideCaret @ 0x1C00D5FC0 (NtUserHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C010A9B0 (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C024145C (zzzHideCaret.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0018DCC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0037408 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  bool v2; // zf

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(_DWORD *)(v0 + 304);
  if ( (v1 & 1) != 0 )
  {
    UT_InvertCaret();
    v1 = *(_DWORD *)(v0 + 304);
  }
  v2 = ++*(_DWORD *)(v0 + 308) == 1;
  *(_DWORD *)(v0 + 304) = v1 & 0xFFFFFFFE;
  if ( v2 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(struct tagWND **)(v0 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
