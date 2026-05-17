/*
 * XREFs of AcquireDebugPrivilege @ 0x180117F58
 * Callers:
 *     GetProcessIptTrace @ 0x180117F8C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x1801180E8 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x1800781B0 (RtlAcquirePrivilege.c)
 */

bool __fastcall AcquireDebugPrivilege(_QWORD *a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 20;
  return (int)RtlAcquirePrivilege(&v2, 1u, 0, a1) >= 0;
}
