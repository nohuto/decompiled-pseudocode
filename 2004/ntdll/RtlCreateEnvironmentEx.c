/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18004DF00
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18004DC98 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironment @ 0x18004DE90 (RtlCreateEnvironment.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004EA9C (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18004EAC8 (RtlpGetBlockSizeEx.c)
 *     RtlMultiByteToUnicodeN @ 0x18004EB30 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x180061000 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  void *Environment; // rsi
  int v6; // ebp
  int v7; // r15d
  int v8; // r8d
  _DWORD *v9; // rax
  unsigned int v11; // ebp
  int v12; // r12d
  size_t BlockSize; // rbx
  void *EnvBlock; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // cc
  int v22; // eax
  int v23; // ebx
  int v24; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return 3221225713LL;
  if ( (((a3 & 5) - 1) & a3 & 5) != 0 )
    return 3221225713LL;
  v6 = a3 & 1;
  v7 = a3 & 2;
  if ( (a3 & 2) != 0 && (a3 & 1) == 0 )
    return 3221225713LL;
  if ( Src )
  {
    v8 = a3 & 4;
    if ( !v8 )
      goto LABEL_7;
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
  v8 = a3 & 4;
LABEL_7:
  if ( v8 )
    goto LABEL_8;
  if ( Src )
  {
    v11 = v6 ^ 1;
    v12 = 0;
    BlockSize = RtlpGetBlockSizeEx(Src, v11);
    goto LABEL_13;
  }
  v11 = 1;
  v12 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v17, v18);
  if ( !Environment )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_13:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return (unsigned int)-1073741670;
    if ( v12 != 1 )
      goto LABEL_15;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
      break;
    v21 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v21 )
    {
LABEL_15:
      if ( v11 == 1 )
      {
        memmove(EnvBlock, Environment, BlockSize);
        if ( v12 == 1 )
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v15, v16);
LABEL_18:
        *a2 = EnvBlock;
        return 0LL;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v23 = -2147483643;
      }
      else
      {
        v24 = BlockSize >> 1;
        if ( v7 )
          v22 = RtlOemToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v24);
        else
          v22 = RtlMultiByteToUnicodeN((_DWORD)EnvBlock, BlockSize, 0, (_DWORD)Environment, v24);
        v23 = v22;
      }
      if ( v23 >= 0 )
        goto LABEL_18;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
      return (unsigned int)v23;
    }
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v19, v20);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v19, v20);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)EnvBlock);
LABEL_8:
  v9 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v9 )
    return 3221225626LL;
  *v9 = 0;
  *a2 = v9;
  return 0LL;
}
