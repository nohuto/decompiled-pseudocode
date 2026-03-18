/*
 * XREFs of zzzInternalHideCaret @ 0x1C005FE40
 * Callers:
 *     zzzInternalDestroyCaret @ 0x1C005FD5C (zzzInternalDestroyCaret.c)
 *     xxxScrollWindowEx @ 0x1C00695EC (xxxScrollWindowEx.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     NtUserHideCaret @ 0x1C0090DE0 (NtUserHideCaret.c)
 *     zzzHideCaret @ 0x1C02426FC (zzzHideCaret.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C005FED0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0061924 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 */

__int64 zzzInternalHideCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 result; // rax
  bool v3; // zf

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 304);
  if ( (v1 & 1) != 0 )
  {
    UT_InvertCaret();
    v1 = *(_DWORD *)(v0 + 304);
  }
  ++*(_DWORD *)(v0 + 308);
  result = v1 & 0xFFFFFFFE;
  v3 = *(_DWORD *)(v0 + 308) == 1;
  *(_DWORD *)(v0 + 304) = result;
  if ( v3 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
    return xxxWindowEvent(0x8003u, gdwDeferWinEvent != 0 ? 2 : 0);
  }
  return result;
}
