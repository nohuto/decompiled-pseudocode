/*
 * XREFs of RtlInitializeCriticalSection @ 0x180061460
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  unsigned __int64 v2; // rcx
  bool v3; // zf
  char v4; // al
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  unsigned __int64 SpinCount; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v12; // [rsp+48h] [rbp-20h]

  CriticalSection->LockCount = -1;
  v2 = 0LL;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
    v2 = 33556432LL;
  v3 = RtlpForceCSDebugInfoCreation == 0;
  CriticalSection->SpinCount = v2;
  v4 = !v3;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( v4 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v5 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v7 = 2147353474LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = CriticalSection;
    v10 = 5923;
    SpinCount = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
