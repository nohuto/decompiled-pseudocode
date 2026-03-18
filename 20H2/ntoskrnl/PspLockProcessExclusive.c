/*
 * XREFs of PspLockProcessExclusive @ 0x1402E8F50
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x1406991D0 (NtTerminateProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PspCreatePicoProcess @ 0x14090E550 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
