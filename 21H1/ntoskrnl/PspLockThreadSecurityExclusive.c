/*
 * XREFs of PspLockThreadSecurityExclusive @ 0x140310DF4
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1280, 0LL);
}
