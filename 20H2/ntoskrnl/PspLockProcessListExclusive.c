/*
 * XREFs of PspLockProcessListExclusive @ 0x14023D558
 * Callers:
 *     PspInsertProcess @ 0x1406302B8 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
