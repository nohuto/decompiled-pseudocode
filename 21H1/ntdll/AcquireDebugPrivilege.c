/*
 * XREFs of AcquireDebugPrivilege @ 0x4B3898C0
 * Callers:
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 * Callees:
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 */

bool __thiscall AcquireDebugPrivilege(int *this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  v2 = 20;
  return RtlAcquirePrivilege((int)&v2, 1u, 0, this) >= 0;
}
