/*
 * XREFs of PspLockJobListExclusive @ 0x140711064
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
}
