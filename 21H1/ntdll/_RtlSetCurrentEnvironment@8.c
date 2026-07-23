/*
 * XREFs of _RtlSetCurrentEnvironment@8 @ 0x4B32DD40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __cdecl RtlSetCurrentEnvironment(PVOID Environment, PVOID *PreviousEnvironment)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ebx
  unsigned int v3; // esi
  void *v4; // eax
  struct _PEB *v5; // eax
  size_t v7; // [esp-4h] [ebp-14h]
  PVOID BaseAddress; // [esp+Ch] [ebp-4h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v3 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  LODWORD(v7) = 564;
  memset(&RtlpEnvironLookupTable, 0, v7);
  v4 = ProcessParameters->Environment;
  ++ProcessParameters->EnvironmentVersion;
  BaseAddress = v4;
  v5 = NtCurrentPeb();
  ProcessParameters->Environment = Environment;
  ProcessParameters->EnvironmentSize = v3;
  RtlLeaveCriticalSection(v5->FastPebLock);
  if ( PreviousEnvironment )
  {
    *PreviousEnvironment = BaseAddress;
  }
  else if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return 0;
}
