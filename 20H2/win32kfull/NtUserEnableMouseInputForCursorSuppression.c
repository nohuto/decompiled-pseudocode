/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C00298D0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C002A050 (TransitionCursorSuppressionState.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  v5 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_12;
  v5 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v5 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v5 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_12:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v2, v3);
    v8 = 2LL;
    *(_DWORD *)(CurrentProcessWin32Process + 820) &= ~0x80000u;
LABEL_14:
    TransitionCursorSuppressionState(v8, 1LL);
    goto LABEL_5;
  }
  v5 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v9 = PsGetCurrentProcessWin32Process(v5, v2, v3);
    v8 = 1LL;
    *(_DWORD *)(v9 + 820) |= 0x80000u;
    goto LABEL_14;
  }
LABEL_5:
  v4 = 1LL;
LABEL_6:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
