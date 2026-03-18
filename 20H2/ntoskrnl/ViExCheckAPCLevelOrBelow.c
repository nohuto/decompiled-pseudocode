/*
 * XREFs of ViExCheckAPCLevelOrBelow @ 0x1409E7D94
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x1409E7720 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409E77D0 (VerifierExAcquireFastMutexNoReboot.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E7E80 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCLevelOrBelow(__int64 a1, ULONG_PTR a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( !a3 && CurrentIrql > 1u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x33uLL, CurrentIrql, a2, 0LL);
  return CurrentIrql;
}
