/*
 * XREFs of PspLockProcessListShared @ 0x14057B950
 * Callers:
 *     PsGetPreviousProcess @ 0x14090B378 (PsGetPreviousProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  return ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
