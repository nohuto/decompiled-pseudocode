/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x1C01FEC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 NtUserIsMouseInputEnabled()
{
  _BOOL8 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  EnterCrit(0LL, 1LL);
  v0 = ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0;
  UserSessionSwitchLeaveCrit(v2, v1, v3);
  return v0;
}
