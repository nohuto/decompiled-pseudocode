/*
 * XREFs of _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0
 * Callers:
 *     _RtlCreateEnvironment@8 @ 0x4B2DACC0 (_RtlCreateEnvironment@8.c)
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 * Callees:
 *     _RtlOemToUnicodeN@20 @ 0x4B2AACD0 (_RtlOemToUnicodeN@20.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA (_RtlpAllocateEnvBlock@4.c)
 *     _RtlpGetBlockSizeEx@8 @ 0x4B2DB9E7 (_RtlpGetBlockSizeEx@8.c)
 *     _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50 (_RtlMultiByteToUnicodeN@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  PVOID v3; // edi
  ULONG v4; // edx
  ULONG EnvironmentSize; // ebx
  void *v6; // esi
  bool v7; // cc
  _DWORD *EnvBlock; // ecx
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  size_t v12; // [esp-4h] [ebp-20h]
  ULONG v13; // [esp-4h] [ebp-20h]
  BOOL v14; // [esp+10h] [ebp-Ch]
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  ProcessParameters = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 || (((Flags & 5) - 1) & Flags & 5) != 0 || (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  v3 = SourceEnvironment;
  if ( !SourceEnvironment )
  {
    if ( (Flags & 1) == 0 )
    {
      v4 = Flags & 4;
      goto LABEL_7;
    }
    return -1073741776;
  }
  v4 = Flags & 4;
  if ( (Flags & 4) != 0 )
    return -1073741776;
LABEL_7:
  if ( v4 )
  {
LABEL_19:
    EnvBlock = (_DWORD *)RtlpAllocateEnvBlock(4);
    if ( EnvBlock )
    {
      *EnvBlock = 0;
      *Environment = EnvBlock;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    if ( !SourceEnvironment )
    {
      v14 = 1;
      v16 = 1;
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
      v3 = ProcessParameters->Environment;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      if ( v3 )
        goto LABEL_10;
      goto LABEL_19;
    }
    v16 = 0;
    v14 = !(Flags & 1);
    EnvironmentSize = RtlpGetBlockSizeEx(SourceEnvironment, v14);
    while ( 1 )
    {
LABEL_10:
      v6 = (void *)RtlpAllocateEnvBlock(EnvironmentSize);
      if ( !v6 )
        return -1073741670;
      if ( v16 != 1 )
        break;
      RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
      v3 = ProcessParameters->Environment;
      if ( !v3 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        goto LABEL_19;
      }
      v7 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      if ( v7 )
        break;
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    if ( v14 )
    {
      LODWORD(v12) = EnvironmentSize;
      memcpy(v6, v3, v12);
      if ( v16 == 1 )
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_17:
      *Environment = v6;
      return 0;
    }
    v13 = EnvironmentSize >> 1;
    if ( (Flags & 2) != 0 )
      v10 = RtlOemToUnicodeN((PWSTR)v6, EnvironmentSize, 0, (PCCH)v3, v13);
    else
      v10 = RtlMultiByteToUnicodeN((PWCH)v6, EnvironmentSize, 0, (PCSTR)v3, v13);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_17;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    return v11;
  }
}
