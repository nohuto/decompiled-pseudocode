/*
 * XREFs of PspLockProcessListShared @ 0x14057B310
 * Callers:
 *     PsGetPreviousProcess @ 0x14090A0C8 (PsGetPreviousProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
