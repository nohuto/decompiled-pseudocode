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

int __stdcall RtlSetCurrentEnvironment(int a1, int *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ebx
  int v3; // esi
  void *Environment; // eax
  struct _PEB *v5; // eax
  int v7; // [esp+Ch] [ebp-4h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v3 = RtlSizeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
  memset(&RtlpEnvironLookupTable, 0, 0x234u);
  Environment = ProcessParameters->Environment;
  ++ProcessParameters->EnvironmentVersion;
  v7 = (int)Environment;
  v5 = NtCurrentPeb();
  ProcessParameters->Environment = (void *)a1;
  ProcessParameters->EnvironmentSize = v3;
  RtlLeaveCriticalSection((int)v5->FastPebLock);
  if ( a2 )
  {
    *a2 = v7;
  }
  else if ( v7 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return 0;
}
