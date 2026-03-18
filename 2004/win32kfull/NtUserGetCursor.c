/*
 * XREFs of NtUserGetCursor @ 0x1C01151A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetCursor()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rbx
  __int64 *v3; // rcx

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 376LL);
  if ( v3 )
    v2 = *v3;
  UserSessionSwitchLeaveCrit(v3, v0, v1);
  return v2;
}
