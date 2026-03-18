/*
 * XREFs of ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB1E8
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C004A450 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C003B570 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     GreHidePointer @ 0x1C004A8C0 (GreHidePointer.c)
 */

void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1)
{
  int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v1 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v1 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    UserSessionSwitchLeaveCrit(v4, v3, v5);
    Feedback::gfInRange = 1;
  }
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *((_DWORD *)a1 + 1), *((_DWORD *)a1 + 2), 8);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, (const struct tagPOINT *)((char *)a1 + 4), 0);
  if ( v1 )
  {
    EnterCrit(0LL, 1LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8u, 0);
    GreHidePointer(0, v6, v7, v8);
    UserSessionSwitchLeaveCrit(v10, v9, v11);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( (Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors)
      && ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    {
      TransitionCursorSuppressionState(2u, 0);
    }
    UserSessionSwitchLeaveCrit(v13, v12, v14);
    Feedback::gfInRange = 0;
  }
}
