/*
 * XREFs of PiAuditDeviceEnableDisableAction @ 0x1408B11B0
 * Callers:
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140736A08 (PipClearDevNodeProblem.c)
 * Callees:
 *     PiAuditDeviceOperation @ 0x1408B1228 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceEnableDisableAction(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a2 == 22 )
  {
    if ( (_DWORD)a3 == 22 )
      return result;
    v3 = 4LL;
  }
  else
  {
    if ( (_DWORD)a3 != 22 )
      return result;
    v3 = 2LL;
  }
  LOBYTE(a3) = 1;
  return PiAuditDeviceOperation(a1, v3, a3);
}
