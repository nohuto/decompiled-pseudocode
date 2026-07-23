/*
 * XREFs of _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF (_RtlpWow64ThunkEnvironment64To32@0.c)
 *     _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA (_RtlpAllocateEnvBlock@4.c)
 *     _RtlpGetBlockSizeEx@8 @ 0x4B2DB9E7 (_RtlpGetBlockSizeEx@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __stdcall RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // esi
  void *v1; // eax
  int BlockSize; // edi
  void *EnvBlock; // eax
  PVOID v4; // ebx
  NTSTATUS result; // eax
  size_t v6; // [esp-4h] [ebp-18h]
  PVOID Environment; // [esp+Ch] [ebp-8h] BYREF
  void *Src; // [esp+10h] [ebp-4h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v1 = ProcessParameters->Environment;
  Src = v1;
  if ( v1 )
  {
    BlockSize = RtlpGetBlockSizeEx(v1, 1);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    LODWORD(v6) = BlockSize;
    memcpy(EnvBlock, Src, v6);
    goto LABEL_4;
  }
  BlockSize = 4;
  result = RtlCreateEnvironmentEx(0, &Environment, 4u);
  if ( result >= 0 )
  {
    v4 = Environment;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    LODWORD(v6) = 564;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    memset(&RtlpEnvironLookupTable, 0, v6);
    RtlpWow64ThunkEnvironment64To32();
    return 0;
  }
  return result;
}
