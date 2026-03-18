/*
 * XREFs of PspLockProcessListExclusive @ 0x14026A76C
 * Callers:
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
