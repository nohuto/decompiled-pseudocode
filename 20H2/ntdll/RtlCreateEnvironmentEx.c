/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18004DF50
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18004DCE8 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironment @ 0x18004DEE0 (RtlCreateEnvironment.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004EAEC (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18004EB18 (RtlpGetBlockSizeEx.c)
 *     RtlMultiByteToUnicodeN @ 0x18004EB80 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x180061110 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  PVOID v5; // rsi
  ULONG v6; // ebp
  ULONG v7; // r15d
  ULONG v8; // r8d
  _DWORD *v9; // rax
  unsigned int v11; // ebp
  int v12; // r12d
  unsigned __int64 BlockSize; // rbx
  void *EnvBlock; // rdi
  bool v15; // cc
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v5 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741583;
  if ( (((Flags & 5) - 1) & Flags & 5) != 0 )
    return -1073741583;
  v6 = Flags & 1;
  v7 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741583;
  if ( SourceEnvironment )
  {
    v8 = Flags & 4;
    if ( !v8 )
      goto LABEL_7;
    return -1073741776;
  }
  if ( (Flags & 1) != 0 )
    return -1073741776;
  v8 = Flags & 4;
LABEL_7:
  if ( v8 )
    goto LABEL_8;
  if ( SourceEnvironment )
  {
    v11 = v6 ^ 1;
    v12 = 0;
    BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, v11);
    goto LABEL_13;
  }
  v11 = 1;
  v12 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v5 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v5 )
    goto LABEL_8;
  while ( 1 )
  {
LABEL_13:
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !EnvBlock )
      return -1073741670;
    if ( v12 != 1 )
      goto LABEL_15;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v5 = ProcessParameters->Environment;
    if ( !v5 )
      break;
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
    {
LABEL_15:
      if ( v11 == 1 )
      {
        memmove(EnvBlock, v5, BlockSize);
        if ( v12 == 1 )
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_18:
        *Environment = EnvBlock;
        return 0;
      }
      if ( BlockSize > 0xFFFFFFFF )
      {
        v17 = -2147483643;
      }
      else
      {
        BytesInMultiByteString = BlockSize >> 1;
        if ( v7 )
          v16 = RtlOemToUnicodeN((PWSTR)EnvBlock, BlockSize, 0LL, (PCCH)v5, BytesInMultiByteString);
        else
          v16 = RtlMultiByteToUnicodeN((PWCH)EnvBlock, BlockSize, 0LL, (PCSTR)v5, BytesInMultiByteString);
        v17 = v16;
      }
      if ( v17 >= 0 )
        goto LABEL_18;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
      return v17;
    }
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, EnvBlock);
LABEL_8:
  v9 = (_DWORD *)RtlpAllocateEnvBlock(4LL);
  if ( !v9 )
    return -1073741670;
  *v9 = 0;
  *Environment = v9;
  return 0;
}
