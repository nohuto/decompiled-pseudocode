/*
 * XREFs of ?_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z @ 0x7F38E
 * Callers:
 *     _NtUserGetCursorInfo@4 @ 0x7F2E0 (_NtUserGetCursorInfo@4.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UsingPenCursors@0 @ 0x7F404 (_UsingPenCursors@0.c)
 */

void __thiscall _GetCursorInfo(_DWORD *this)
{
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rax
  int v4; // eax
  struct tagCURSOR *v5; // ecx
  int v6; // edx

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v3 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  this[3] = v3;
  v4 = gCursorSuppressionState;
  v5 = 0;
  this[4] = HIDWORD(v3);
  this[1] = 0;
  v6 = 2;
  if ( v4 == 1
    || v4 == 2
    || v4 == 3
    || v4 == 6
    || v4 == 5
    || UsingPenCursors() && (struct tagCURSOR *)Feedback::gfInRange == v5 )
  {
    this[1] = v6;
  }
  else if ( gpcurPhysCurrent != v5 )
  {
    this[1] = 1;
  }
  if ( gpcurLogCurrent )
    v5 = *(struct tagCURSOR **)gpcurLogCurrent;
  this[2] = v5;
}
