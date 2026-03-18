/*
 * XREFs of PspLockProcessExclusive @ 0x140337FB0
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     NtTerminateProcess @ 0x140709EB0 (NtTerminateProcess.c)
 *     PspCreatePicoProcess @ 0x140907680 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
