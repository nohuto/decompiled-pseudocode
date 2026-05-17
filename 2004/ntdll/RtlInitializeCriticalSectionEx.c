/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180020BC0
 * Callers:
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlInitializeResource @ 0x1800112E0 (RtlInitializeResource.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 *     EtwpInitLoggerContext @ 0x180056D6C (EtwpInitLoggerContext.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F8A8 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitParallelLoadingSupport @ 0x18007E050 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD15C (LdrpCreateSoftwareEnclave.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x1800F22F4 (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x180102520 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180011840 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  bool v6; // al
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( (a3 & 0x2000000) != 0 || !(_DWORD)a2 )
      v5 = 33556432LL;
    else
      v5 = a2 & 0xFFFFFF;
  }
  *(_QWORD *)(a1 + 32) = v5 | a3 & 0x9000000;
  v6 = (a3 & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation;
  *(_QWORD *)a1 = -1LL;
  if ( v6 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = a1;
    v11 = 5923;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a2) )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v10);
  }
  return 0LL;
}
