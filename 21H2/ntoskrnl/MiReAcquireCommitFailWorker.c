/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14052C330
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x1402EAA58 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PsTerminateProcess @ 0x1406BC4B8 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
