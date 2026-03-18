/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C0200A20
 * Callers:
 *     <none>
 * Callees:
 *     IsPrivileged @ 0x1C001A7F0 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v4 = gpsi;
  if ( *(_DWORD *)(gpsi + 2280LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5LL, v4, v3);
    v2 = 0LL;
  }
  else
  {
    v5 = gpsi;
    *(_DWORD *)(gpsi + 2280LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
