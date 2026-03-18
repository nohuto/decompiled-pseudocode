/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140580D80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
