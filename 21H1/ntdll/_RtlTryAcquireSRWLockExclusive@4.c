/*
 * XREFs of _RtlTryAcquireSRWLockExclusive@4 @ 0x4B2F2760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  return _interlockedbittestandset((volatile signed __int32 *)SRWLock, 0) == 0;
}
