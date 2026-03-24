/*
 * XREFs of MmDeterminePoolType @ 0x1402D2AAC
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E6620 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x1409ECF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402FAD9C (MiDeterminePoolType.c)
 */

__int64 MmDeterminePoolType()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = MiDeterminePoolType();
  result = 0LL;
  if ( v0 != 32 )
    return v0;
  return result;
}
