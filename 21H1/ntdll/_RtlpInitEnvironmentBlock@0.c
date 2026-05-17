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

int __stdcall RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // esi
  void *Environment; // eax
  size_t BlockSize; // edi
  void *EnvBlock; // eax
  void *v4; // ebx
  int result; // eax
  void *v6; // [esp+Ch] [ebp-8h] BYREF
  void *Src; // [esp+10h] [ebp-4h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  Src = Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx(Environment, 1);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return -1073741670;
    memcpy(EnvBlock, Src, BlockSize);
    goto LABEL_4;
  }
  BlockSize = 4;
  result = RtlCreateEnvironmentEx(0, &v6, 4);
  if ( result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    memset(&RtlpEnvironLookupTable, 0, 0x234u);
    RtlpWow64ThunkEnvironment64To32();
    return 0;
  }
  return result;
}
