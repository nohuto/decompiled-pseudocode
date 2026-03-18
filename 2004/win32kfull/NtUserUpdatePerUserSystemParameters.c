/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C0128DD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v7[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v7, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v7[1]);
  v7[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v7[3]) = 32;
  LOBYTE(v7[6]) = -1;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return updated;
}
