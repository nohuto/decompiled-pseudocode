/*
 * XREFs of RtlResetMemoryZone @ 0x1800EB4A0
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x1800EB440 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlResetMemoryZone(PVOID MemoryZone)
{
  volatile __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  for ( i = (volatile __int64 *)*((_QWORD *)MemoryZone + 6); i != MemoryZone; i = (volatile __int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)MemoryZone + 2, (__int64)MemoryZone + 56);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  return 0;
}
