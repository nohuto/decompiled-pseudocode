/*
 * XREFs of _TransitionCursorSuppressionState@8 @ 0xB0178
 * Callers:
 *     _NtUserEnableMouseInputForCursorSuppression@4 @ 0xAF3E6 (_NtUserEnableMouseInputForCursorSuppression@4.c)
 *     ?HandlePointerCursorSideOp@@YGXXZ @ 0xB0048 (-HandlePointerCursorSideOp@@YGXXZ.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _PowerOnGdi@12 @ 0xD37F0 (_PowerOnGdi@12.c)
 *     _PowerOffGdi@0 @ 0xD4366 (_PowerOffGdi@0.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     ?RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z @ 0x148A86 (-RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YGXHH@Z @ 0x148CF8 (-xxxSwitchCursors@@YGXHH@Z.c)
 * Callees:
 *     ?TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0xB026A (-TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     _SetPointerMetaVisibility@4 @ 0xB0292 (_SetPointerMetaVisibility@4.c)
 *     _ReadCursorSuppressionConfig@0 @ 0xEC628 (_ReadCursorSuppressionConfig@0.c)
 */

int __thiscall TransitionCursorSuppressionState(int this, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-4h]

  v5 = gCursorSuppressionState;
  if ( gCursorSuppressionState <= 0 )
    return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
  this = 4;
  if ( gCursorSuppressionState > 4 )
  {
    v3 = 8;
    this = 6;
    if ( gCursorSuppressionState > 6 && gCursorSuppressionState != 8 )
    {
      if ( gCursorSuppressionState == 9 )
      {
        gCursorSuppressionState = ReadCursorSuppressionConfig();
        if ( gCursorSuppressionState )
          SetPointerMetaVisibility(0);
      }
      return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
    }
    if ( a2 == 8 )
    {
LABEL_32:
      gCursorSuppressionState = v3;
      return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
    }
    if ( a2 == 2 )
    {
      if ( a3 )
      {
        gCursorSuppressionState = 6;
        _InterlockedOr(&Feedback::gdwPointerCursorOps, 2u);
        KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
        return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
      }
      SetPointerMetaVisibility(0);
      goto LABEL_17;
    }
    if ( a2 != 1 )
    {
      if ( a2 != 3 )
        return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
      if ( !a3 )
      {
        SetPointerMetaVisibility(0);
        gCursorSuppressionState = 3;
        return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
      }
      gCursorSuppressionState = 7;
      goto LABEL_23;
    }
    if ( a3 )
    {
      gCursorSuppressionState = 5;
      goto LABEL_23;
    }
    SetPointerMetaVisibility(0);
LABEL_10:
    gCursorSuppressionState = 1;
    return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
  }
  if ( a2 == 1 )
    goto LABEL_10;
  if ( a2 == 2 )
  {
LABEL_17:
    gCursorSuppressionState = 2;
    return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
  }
  v3 = 3;
  if ( a2 == 3 )
    goto LABEL_32;
  if ( a2 == 8 )
  {
    if ( !a3 )
    {
      SetPointerMetaVisibility(1);
      gCursorSuppressionState = 8;
      return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
    }
    gCursorSuppressionState = 4;
LABEL_23:
    _InterlockedOr(&Feedback::gdwPointerCursorOps, 2u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  return InputTraceLogging::Cursor::TransitionCursorSuppressionState(v5, a2, this);
}
