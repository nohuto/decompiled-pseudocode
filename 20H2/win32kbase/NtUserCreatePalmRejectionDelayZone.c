/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1C012FCB0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     AddPalmRejectionDelayZone @ 0x1C01A8964 (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0, 1);
  v6 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
