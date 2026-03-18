/*
 * XREFs of PsQuitNextProcessThread @ 0x140711350
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140881DA4 (DbgkpPostFakeThreadMessages.c)
 *     PsWaitForAllProcesses @ 0x140907A28 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x140907F1C (PspWaitForUsermodeExit.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
