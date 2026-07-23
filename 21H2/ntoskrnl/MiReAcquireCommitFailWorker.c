/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14052C570
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeProcess @ 0x14029BDA8 (KeForceResumeProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
