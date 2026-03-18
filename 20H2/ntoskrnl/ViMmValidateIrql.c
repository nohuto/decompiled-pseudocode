/*
 * XREFs of ViMmValidateIrql @ 0x1409EA680
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E9280 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E9420 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E9510 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x1409E9900 (VerifierMmFreePagesFromMdl.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
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
