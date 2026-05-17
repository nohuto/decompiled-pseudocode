/*
 * XREFs of _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA (_RtlpAllocateEnvBlock@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0 (_RtlSetEnvironmentStrings@8.c)
 */

int __stdcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ebx
  void *EnvBlock; // eax
  void *v5; // [esp+10h] [ebp-24h]
  unsigned int v6; // [esp+14h] [ebp-20h]
  void *Environment; // [esp+18h] [ebp-1Ch]
  void *v8; // [esp+18h] [ebp-1Ch]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v6 = RtlSizeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Environment);
  if ( v6 >= Size )
  {
    memcpy(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    memset(&RtlpEnvironLookupTable, 0, 0x234u);
  }
  RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
  if ( v6 < Size )
  {
    EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
    v5 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    memcpy(EnvBlock, Src, Size);
    RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
    v8 = ProcessParameters->Environment;
    memset(&RtlpEnvironLookupTable, 0, 0x234u);
    ProcessParameters->Environment = v5;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
  }
  return 0;
}
