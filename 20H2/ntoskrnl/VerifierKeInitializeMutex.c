/*
 * XREFs of VerifierKeInitializeMutex @ 0x1409DDC60
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutexCommon @ 0x1409DF03C (ViKeInitializeMutexCommon.c)
 *     VfDeadlockInitializeResource @ 0x1409E11C4 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ViKeInitializeMutexCommon();
  return VfDeadlockInitializeResource(a1);
}
