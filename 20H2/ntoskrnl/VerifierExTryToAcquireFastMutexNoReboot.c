/*
 * XREFs of VerifierExTryToAcquireFastMutexNoReboot @ 0x1409E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E7E80 (ViExTryToAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExTryToAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExTryToAcquireFastMutexCommon(a1, 0LL);
}
