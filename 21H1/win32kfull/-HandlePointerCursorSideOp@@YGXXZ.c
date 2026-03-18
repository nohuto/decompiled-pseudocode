/*
 * XREFs of ?HandlePointerCursorSideOp@@YGXXZ @ 0xB0048
 * Callers:
 *     ?OnPointerCursorOperation@@YGXXZ @ 0xAF582 (-OnPointerCursorOperation@@YGXXZ.c)
 * Callees:
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     ?xxxEnsureAllDpiCursors@@YGXXZ @ 0xD8C20 (-xxxEnsureAllDpiCursors@@YGXXZ.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YGXXZ @ 0x148C7F (-xxxRestoreMouseCursors@Feedback@@YGXXZ.c)
 *     ?xxxSwitchCursors@@YGXHH@Z @ 0x148CF8 (-xxxSwitchCursors@@YGXHH@Z.c)
 */

void __stdcall HandlePointerCursorSideOp()
{
  __int16 v0; // bx
  Feedback *v1; // [esp+0h] [ebp-Ch]
  int v2; // [esp+4h] [ebp-8h]

  v0 = _InterlockedAnd(&Feedback::gdwPointerCursorOps, 0);
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(0, 1);
    Feedback::xxxRestoreMouseCursors(v1);
    UserSessionSwitchLeaveCrit();
  }
  if ( (v0 & 0x700) != 0 )
  {
    EnterCrit(0, 1);
    xxxSwitchCursors((int)v1, v2);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit();
  }
  if ( (v0 & 2) != 0 )
  {
    EnterCrit(0, 1);
    switch ( gCursorSuppressionState )
    {
      case 4:
        TransitionCursorSuppressionState(8, 0);
        break;
      case 5:
        TransitionCursorSuppressionState(1, 0);
        break;
      case 6:
        TransitionCursorSuppressionState(2, 0);
        break;
      case 7:
        TransitionCursorSuppressionState(3, 0);
        break;
    }
    UserSessionSwitchLeaveCrit();
  }
  if ( (v0 & 4) != 0 )
  {
    EnterCrit(0, 1);
    xxxEnsureAllDpiCursors();
    UserSessionSwitchLeaveCrit();
  }
}
