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

NTSTATUS __cdecl RtlSetEnvironmentStrings(PCWCHAR NewEnvironment, SIZE_T NewEnvironmentSize)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ebx
  void *EnvBlock; // eax
  size_t v5; // [esp-10h] [ebp-44h]
  size_t v6; // [esp-4h] [ebp-38h]
  void *v7; // [esp+10h] [ebp-24h]
  unsigned int v8; // [esp+14h] [ebp-20h]
  PVOID BaseAddress; // [esp+18h] [ebp-1Ch]
  PVOID BaseAddressa; // [esp+18h] [ebp-1Ch]
  size_t ms_exc_8; // [esp+24h] [ebp-10h]
  size_t ms_exc_8a; // [esp+24h] [ebp-10h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  BaseAddress = ProcessParameters->Environment;
  v8 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v8 >= (unsigned int)NewEnvironmentSize )
  {
    LODWORD(v6) = NewEnvironmentSize;
    memcpy(BaseAddress, NewEnvironment, v6);
    ProcessParameters->Environment = BaseAddress;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    LODWORD(v5) = 564;
    memset(&RtlpEnvironLookupTable, 0, v5);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( v8 < (unsigned int)NewEnvironmentSize )
  {
    EnvBlock = (void *)RtlpAllocateEnvBlock(NewEnvironmentSize);
    v7 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    LODWORD(ms_exc_8) = NewEnvironmentSize;
    memcpy(EnvBlock, NewEnvironment, ms_exc_8);
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    BaseAddressa = ProcessParameters->Environment;
    LODWORD(ms_exc_8a) = 564;
    memset(&RtlpEnvironLookupTable, 0, ms_exc_8a);
    ProcessParameters->Environment = v7;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddressa);
  }
  return 0;
}
