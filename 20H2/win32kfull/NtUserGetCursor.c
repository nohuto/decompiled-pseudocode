/*
 * XREFs of NtUserGetCursor @ 0x1C0116730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetCursor()
{
  __int64 v0; // rbx
  __int64 *v1; // rcx

  EnterCrit(0LL, 1LL);
  v0 = 0LL;
  v1 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 376LL);
  if ( v1 )
    v0 = *v1;
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
