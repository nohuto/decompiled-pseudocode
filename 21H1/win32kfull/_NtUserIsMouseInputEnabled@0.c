/*
 * XREFs of _NtUserIsMouseInputEnabled@0 @ 0x165AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserIsMouseInputEnabled()
{
  int v0; // esi

  v0 = 1;
  EnterCrit(0, 1);
  if ( gCursorSuppressionState == 1 || gCursorSuppressionState == 5 )
    v0 = 0;
  UserSessionSwitchLeaveCrit();
  return v0;
}
