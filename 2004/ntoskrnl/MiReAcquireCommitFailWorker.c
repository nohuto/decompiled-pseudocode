/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140526E60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
