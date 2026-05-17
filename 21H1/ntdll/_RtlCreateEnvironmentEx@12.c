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

int __stdcall RtlCreateEnvironmentEx(void *a1, _DWORD *a2, int a3)
{
  void *Environment; // edi
  int v4; // edx
  size_t EnvironmentSize; // ebx
  int v6; // edx
  __int16 v7; // cx
  void *v8; // esi
  bool v9; // cc
  _DWORD *EnvBlock; // ecx
  signed int v12; // eax
  signed int v13; // edi
  unsigned int v14; // [esp-4h] [ebp-20h]
  BOOL v15; // [esp+10h] [ebp-Ch]
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  ProcessParameters = 0;
  if ( (a3 & 0xFFFFFFF8) != 0 || (((a3 & 5) - 1) & a3 & 5) != 0 || (a3 & 2) != 0 && (a3 & 1) == 0 )
    return -1073741583;
  Environment = a1;
  if ( !a1 )
  {
    if ( (a3 & 1) == 0 )
    {
      v4 = a3 & 4;
      goto LABEL_7;
    }
    return -1073741776;
  }
  v4 = a3 & 4;
  if ( (a3 & 4) != 0 )
    return -1073741776;
LABEL_7:
  if ( v4 )
  {
LABEL_19:
    EnvBlock = (_DWORD *)RtlpAllocateEnvBlock(4);
    if ( EnvBlock )
    {
      *EnvBlock = 0;
      *a2 = EnvBlock;
      return 0;
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    if ( !a1 )
    {
      v15 = 1;
      v17 = 1;
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
      Environment = ProcessParameters->Environment;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
      if ( Environment )
        goto LABEL_10;
      goto LABEL_19;
    }
    v17 = 0;
    v15 = !(a3 & 1);
    EnvironmentSize = RtlpGetBlockSizeEx(a1, v15);
    while ( 1 )
    {
LABEL_10:
      v8 = (void *)RtlpAllocateEnvBlock(EnvironmentSize);
      if ( !v8 )
        return -1073741670;
      if ( v17 != 1 )
        break;
      RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
      Environment = ProcessParameters->Environment;
      if ( !Environment )
      {
        RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
        goto LABEL_19;
      }
      v9 = ProcessParameters->EnvironmentSize <= EnvironmentSize;
      EnvironmentSize = ProcessParameters->EnvironmentSize;
      if ( v9 )
        break;
      RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
    }
    if ( v15 )
    {
      memcpy(v8, Environment, EnvironmentSize);
      if ( v17 == 1 )
        RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
LABEL_17:
      *a2 = v8;
      return 0;
    }
    v14 = EnvironmentSize >> 1;
    if ( (a3 & 2) != 0 )
      v12 = RtlOemToUnicodeN(v7, v6, (char *)v8, EnvironmentSize, 0, (unsigned __int8 *)Environment, v14);
    else
      v12 = RtlMultiByteToUnicodeN(v8, EnvironmentSize, 0, Environment, v14);
    v13 = v12;
    if ( v12 >= 0 )
      goto LABEL_17;
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
    return v13;
  }
}
