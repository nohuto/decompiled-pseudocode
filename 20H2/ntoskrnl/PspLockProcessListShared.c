/*
 * XREFs of PspLockProcessListShared @ 0x14057F380
 * Callers:
 *     PsGetPreviousProcess @ 0x140910FB4 (PsGetPreviousProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
