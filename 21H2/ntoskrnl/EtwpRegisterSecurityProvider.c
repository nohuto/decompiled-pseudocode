/*
 * XREFs of EtwpRegisterSecurityProvider @ 0x1407D53D0
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 */

__int64 __fastcall EtwpRegisterSecurityProvider(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 4072) )
    return (unsigned int)-1073741790;
  else
    *(_DWORD *)(a1 + 4072) = PsGetCurrentThreadProcessId();
  return v1;
}
