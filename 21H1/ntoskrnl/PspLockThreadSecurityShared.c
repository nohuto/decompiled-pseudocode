/*
 * XREFs of PspLockThreadSecurityShared @ 0x14057BE7C
 * Callers:
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
}
