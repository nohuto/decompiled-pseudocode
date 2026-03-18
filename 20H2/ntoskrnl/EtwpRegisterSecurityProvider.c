/*
 * XREFs of EtwpRegisterSecurityProvider @ 0x1407D0DE0
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
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
