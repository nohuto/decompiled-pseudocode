/*
 * XREFs of NtUserSetProcessUIAccessZorder @ 0x1C0202570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserSetProcessUIAccessZorder()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcessWin32Process; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  EnterCrit(0LL, 1LL);
  if ( (int)RtlQueryElevationFlags(&v5) >= 0 && (v5 & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1, v0, v2);
    *(_DWORD *)(CurrentProcessWin32Process + 820) |= 2u;
  }
  UserSessionSwitchLeaveCrit(v1);
  return 1LL;
}
