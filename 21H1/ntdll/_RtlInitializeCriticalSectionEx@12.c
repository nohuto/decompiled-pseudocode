/*
 * XREFs of _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90
 * Callers:
 *     _LdrpInitMuiCrits@8 @ 0x4B2B8C84 (_LdrpInitMuiCrits@8.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     _RtlInitializeCriticalSection@4 @ 0x4B2DC2E0 (_RtlInitializeCriticalSection@4.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _LdrpInitParallelLoadingSupport@0 @ 0x4B2DFB52 (_LdrpInitParallelLoadingSupport@0.c)
 *     _RtlInitializeCriticalSectionAndSpinCount@8 @ 0x4B2E1B50 (_RtlInitializeCriticalSectionAndSpinCount@8.c)
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 *     _RtlTraceDatabaseCreate@20 @ 0x4B36A1A0 (_RtlTraceDatabaseCreate@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  struct _PEB *v4; // ecx
  ULONG v5; // edx
  bool v6; // al
  _DWORD *SharedData; // eax
  int v8; // eax
  int v9; // eax
  _BYTE Fields[6]; // [esp+8h] [ebp-30h] BYREF
  __int16 v11; // [esp+Eh] [ebp-2Ah]
  unsigned int v12; // [esp+28h] [ebp-10h]
  PRTL_CRITICAL_SECTION v13; // [esp+2Ch] [ebp-Ch]

  if ( (Flags & 0xE0000000) != 0 || (Flags & 0x11000000) == 0x11000000 )
    return -1073741583;
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) == 0 )
  {
    v4 = NtCurrentPeb();
    CriticalSection->LockCount = -1;
    CriticalSection->RecursionCount = 0;
    CriticalSection->OwningThread = 0;
    CriticalSection->LockSemaphore = 0;
    if ( v4->NumberOfProcessors <= 1 )
    {
      v5 = 0;
    }
    else if ( (Flags & 0x2000000) != 0 || !SpinCount )
    {
      v5 = 33556432;
    }
    else
    {
      v5 = SpinCount & 0xFFFFFF;
    }
    CriticalSection->SpinCount = v5 | Flags & 0x9000000;
    v6 = (Flags & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation;
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1;
    if ( v6 )
    {
      RtlpAddDebugInfoToCriticalSection(CriticalSection);
      if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1 )
        CriticalSection->SpinCount |= 0x1000000u;
    }
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v8 = (int)NtCurrentPeb()->SharedData + 552;
    else
      v8 = 2147353474;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v13 = CriticalSection;
      v11 = 5923;
      v12 = CriticalSection->SpinCount;
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (int)NtCurrentPeb()->SharedData + 552;
      else
        v9 = 2147353474;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x10402u, 8u, Fields);
    }
  }
  return 0;
}
