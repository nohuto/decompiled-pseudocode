/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140526810
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x140358C74 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
