/*
 * XREFs of _RtlTryAcquireSRWLockExclusive@4 @ 0x4B2F2760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlTryAcquireSRWLockExclusive(volatile signed __int32 *a1)
{
  return _interlockedbittestandset(a1, 0) == 0;
}
