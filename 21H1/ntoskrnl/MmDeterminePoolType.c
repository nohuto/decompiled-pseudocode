/*
 * XREFs of MmDeterminePoolType @ 0x140322298
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E35B0 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x1409E9ED0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402AC3D0 (MiDeterminePoolType.c)
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = MiDeterminePoolType(a1);
  result = 0LL;
  if ( v1 != 32 )
    return v1;
  return result;
}
