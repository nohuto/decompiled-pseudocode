/*
 * XREFs of PspLockProcessExclusive @ 0x140268180
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     NtTerminateProcess @ 0x1406B4060 (NtTerminateProcess.c)
 *     PspCreatePicoProcess @ 0x140908930 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
}
