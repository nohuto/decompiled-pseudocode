/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C0137FF0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     AddPalmRejectionDelayZone @ 0x1C01B0A44 (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx

  EnterCrit(0LL, 1);
  v6 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
