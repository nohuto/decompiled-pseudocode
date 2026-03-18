/*
 * XREFs of ?xxxSwitchCursors@@YGXHH@Z @ 0x148CF8
 * Callers:
 *     ?HandlePointerCursorSideOp@@YGXXZ @ 0xB0048 (-HandlePointerCursorSideOp@@YGXXZ.c)
 * Callees:
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 */

void __fastcall xxxSwitchCursors(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx

  Feedback::gfUsingPenCursors = a1;
  Feedback::gfUsingTouchCursors = a1 == 0;
  if ( a1 )
  {
    EtwTraceContactVisualizationInfo(1);
    v3 = *(_DWORD *)UPDWORDPointer(8222);
    if ( a2 && ((v3 & 0x20) == 0 || Feedback::gfForceHidePenCursor) )
    {
      TransitionCursorSuppressionState(v4, 3, 0);
    }
    else
    {
      GreHidePointer(1);
      Feedback::xxxReplaceMouseCursorsWithPenCursors();
    }
  }
  else
  {
    EtwTraceContactVisualizationInfo(2);
    GreHidePointer(1);
  }
}
