/*
 * XREFs of PsQuitNextProcessThread @ 0x1406ED7F0
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140880A84 (DbgkpPostFakeThreadMessages.c)
 *     PsWaitForAllProcesses @ 0x140906778 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x140906C6C (PspWaitForUsermodeExit.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
