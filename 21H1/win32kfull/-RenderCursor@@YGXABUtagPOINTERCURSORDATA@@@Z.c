/*
 * XREFs of ?RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z @ 0x148A86
 * Callers:
 *     ?OnPointerCursorOperation@@YGXXZ @ 0xAF582 (-OnPointerCursorOperation@@YGXXZ.c)
 * Callees:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 */

void __thiscall RenderCursor(_BYTE *this)
{
  BOOL v1; // ebx
  int v3; // ecx
  HDEV *v4; // esi
  int v5; // ecx
  int v6; // ecx

  v1 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(0, 1);
    v1 = gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors);
    if ( gCursorSuppressionState != 1 && gCursorSuppressionState != 5 )
      TransitionCursorSuppressionState(v3, 2, 0);
    UserSessionSwitchLeaveCrit();
    Feedback::gfInRange = 1;
  }
  v4 = (HDEV *)(this + 4);
  GreMovePointer(*(_DWORD **)(_gpDispInfo + 20), (int)*v4, v4[1], 8);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, (const struct tagPOINT *)v4, 0);
  if ( v1 )
  {
    EnterCrit(0, 1);
    if ( gCursorSuppressionState != 1 && gCursorSuppressionState != 5 )
      TransitionCursorSuppressionState(v5, 8, 0);
    GreHidePointer(0);
    UserSessionSwitchLeaveCrit();
  }
  if ( (*this & 2) == 0 )
  {
    EnterCrit(0, 1);
    if ( (Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors)
      && gCursorSuppressionState != 1
      && gCursorSuppressionState != 5 )
    {
      TransitionCursorSuppressionState(v6, 2, 0);
    }
    UserSessionSwitchLeaveCrit();
    Feedback::gfInRange = 0;
  }
}
