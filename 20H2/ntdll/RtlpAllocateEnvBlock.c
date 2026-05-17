/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18004EAEC
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18004DCE8 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18004DF50 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004E160 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180082AE0 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvBlock(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
