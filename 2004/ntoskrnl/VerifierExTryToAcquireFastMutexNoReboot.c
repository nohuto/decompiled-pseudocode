/*
 * XREFs of VerifierExTryToAcquireFastMutexNoReboot @ 0x1409E1A80
 * Callers:
 *     <none>
 * Callees:
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E1E60 (ViExTryToAcquireFastMutexCommon.c)
 */

__int64 __fastcall VerifierExTryToAcquireFastMutexNoReboot(__int64 a1)
{
  return ViExTryToAcquireFastMutexCommon(a1, 0LL);
}
