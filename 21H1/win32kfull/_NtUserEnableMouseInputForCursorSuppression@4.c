/*
 * XREFs of _NtUserEnableMouseInputForCursorSuppression@4 @ 0xAF3E6
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 */

int __stdcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  int v1; // esi
  int CurrentProcessWin32Process; // eax
  int v4; // eax

  v1 = 0;
  EnterCrit(0, 1);
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_9;
  }
  switch ( gCursorSuppressionState )
  {
    case 1:
      goto LABEL_12;
    case 2:
    case 4:
LABEL_10:
      if ( !a1 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        *(_DWORD *)(CurrentProcessWin32Process + 464) |= (unsigned int)&loc_80000;
        TransitionCursorSuppressionState(1, 1);
      }
      break;
    case 5:
LABEL_12:
      if ( a1 )
      {
        v4 = PsGetCurrentProcessWin32Process();
        *(_DWORD *)(v4 + 464) &= ~0x80000u;
        TransitionCursorSuppressionState(2, 1);
      }
      break;
    case 6:
    case 8:
      goto LABEL_10;
  }
  v1 = 1;
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v1;
}
