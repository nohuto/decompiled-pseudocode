/*
 * XREFs of ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DB508
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C004A498 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     GreHidePointer @ 0x1C004A8C0 (GreHidePointer.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DB3B0 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 */

void __fastcall xxxSwitchCursors(int a1, int a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  Feedback *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  Feedback::gfUsingPenCursors = a1;
  Feedback::gfUsingTouchCursors = a1 == 0;
  if ( a1 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v4 = *(_DWORD *)UPDWORDPointer(8222LL);
    if ( a2 && ((v4 & 0x20) == 0 || Feedback::gfForceHidePenCursor) )
    {
      TransitionCursorSuppressionState(3u, 0);
    }
    else
    {
      GreHidePointer(1, v3, v5, v6);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v7);
    }
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    GreHidePointer(1, v8, v9, v10);
  }
}
