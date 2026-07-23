/*
 * XREFs of MmDeterminePoolType @ 0x14025102C
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E7620 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x1409EDF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
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
