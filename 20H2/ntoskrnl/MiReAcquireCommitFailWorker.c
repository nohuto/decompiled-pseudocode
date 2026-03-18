/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14052A830
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1402EB0E0 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
