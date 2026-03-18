/*
 * XREFs of VerifierKeInitializeMutex @ 0x1409D7BE0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x1409D8FBC (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x1409DB144 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
