/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C002E8C8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C002E790 (NtUserGetCursorInfo.c)
 * Callees:
 *     UsingPenCursors @ 0x1C002F570 (UsingPenCursors.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
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
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
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
