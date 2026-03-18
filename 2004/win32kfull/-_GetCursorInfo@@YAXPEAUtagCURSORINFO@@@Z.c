/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C003D0D8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C003CFA0 (NtUserGetCursorInfo.c)
 * Callees:
 *     UsingPenCursors @ 0x1C003DD80 (UsingPenCursors.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  struct tagCURSOR *v5; // rdx
  int v6; // eax

  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v3 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v5 = 0LL;
  *((_QWORD *)a1 + 2) = v3;
  v6 = gCursorSuppressionState;
  *((_DWORD *)a1 + 1) = 0;
  if ( v6 > 0 && v6 < 7 && v6 != 4 || (unsigned int)UsingPenCursors(v4, 0LL) && Feedback::gfInRange == (_DWORD)v5 )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else if ( gpcurPhysCurrent != v5 )
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  if ( gpcurLogCurrent )
    v5 = *(struct tagCURSOR **)gpcurLogCurrent;
  *((_QWORD *)a1 + 1) = v5;
}
