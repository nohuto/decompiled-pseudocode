/*
 * XREFs of PspLockThreadSecurityShared @ 0x14057FEEC
 * Callers:
 *     NtQueryInformationThread @ 0x1405F1760 (NtQueryInformationThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
}
