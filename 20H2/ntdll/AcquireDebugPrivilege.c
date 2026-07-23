/*
 * XREFs of AcquireDebugPrivilege @ 0x180118030
 * Callers:
 *     GetProcessIptTrace @ 0x180118064 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x1801181C0 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x180077180 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(PVOID *ReturnedState)
{
  ULONG Privilege; // [rsp+38h] [rbp+10h] BYREF

  Privilege = 20;
  return RtlAcquirePrivilege(&Privilege, 1u, 0, ReturnedState) >= 0;
}
