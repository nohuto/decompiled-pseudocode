/*
 * XREFs of ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C004A498
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C004A450 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C011CCE4 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DB464 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DB508 (-xxxSwitchCursors@@YAXHH@Z.c)
 */

void HandlePointerCursorSideOp(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  Feedback *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  BOOL v14; // ecx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8

  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(0LL, 1LL);
    Feedback::xxxRestoreMouseCursors(v10);
    UserSessionSwitchLeaveCrit(v12, v11, v13);
  }
  if ( (v2 & 0x700) != 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( (v2 & 0x100) != 0 )
    {
      v14 = 1;
      v15 = 1;
    }
    else
    {
      v14 = (v2 & 0x400) != 0;
      v15 = 0;
    }
    xxxSwitchCursors(v14, v15);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v17, v16, v18);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 4 )
    {
      v5 = 8LL;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v5 = 1LL;
    }
    else
    {
      v6 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v5 = 2LL;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
          goto LABEL_10;
        v5 = 3LL;
      }
    }
    TransitionCursorSuppressionState(v5);
LABEL_10:
    UserSessionSwitchLeaveCrit(v6, v3, v4);
  }
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(0LL, 1LL);
    xxxEnsureAllDpiCursors();
    UserSessionSwitchLeaveCrit(v8, v7, v9);
  }
}
