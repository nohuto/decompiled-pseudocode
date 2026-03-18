/*
 * XREFs of PspLockThreadSecurityExclusive @ 0x14034E484
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1280, 0LL);
}
