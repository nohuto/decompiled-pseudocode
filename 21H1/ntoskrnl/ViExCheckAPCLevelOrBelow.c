/*
 * XREFs of ViExCheckAPCLevelOrBelow @ 0x1409E1D14
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x1409E16A0 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409E1750 (VerifierExAcquireFastMutexNoReboot.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E1E00 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCLevelOrBelow(__int64 a1, ULONG_PTR a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( !a3 && CurrentIrql > 1u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x33uLL, CurrentIrql, a2, 0LL);
  return CurrentIrql;
}
