/*
 * XREFs of _RtlpAllocateEnvBlock@4 @ 0x4B2DB9CA
 * Callers:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 *     _RtlpInitEnvironmentBlock@0 @ 0x4B2DAF42 (_RtlpInitEnvironmentBlock@0.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0 (_RtlSetEnvironmentStrings@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall RtlpAllocateEnvBlock(unsigned int a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0;
  else
    return RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
}
