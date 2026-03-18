/*
 * XREFs of ViMmValidateIrql @ 0x1409E4660
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E3260 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E3400 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E34F0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x1409E38E0 (VerifierMmFreePagesFromMdl.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViMmValidateIrql(char a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax

  if ( !a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && (MmVerifierData & 0x20000) != 0 )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x7EuLL, CurrentIrql, 2uLL, 0LL);
  }
  return result;
}
