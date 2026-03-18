/*
 * XREFs of VerifierKeInitializeMutex @ 0x1409D7C40
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x1409D901C (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x1409DB1A4 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
