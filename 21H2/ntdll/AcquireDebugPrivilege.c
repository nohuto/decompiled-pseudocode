/*
 * XREFs of AcquireDebugPrivilege @ 0x180117EF8
 * Callers:
 *     GetProcessIptTrace @ 0x180117F2C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180118088 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x1800781B0 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
