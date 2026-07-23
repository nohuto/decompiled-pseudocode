/*
 * XREFs of _RtlResetMemoryZone@4 @ 0x4B34D850
 * Callers:
 *     _RtlResetMemoryBlockLookaside@4 @ 0x4B34D5E0 (_RtlResetMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

NTSTATUS __cdecl RtlResetMemoryZone(PVOID MemoryZone)
{
  volatile __int32 *i; // edx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  for ( i = (volatile __int32 *)*((_DWORD *)MemoryZone + 6); i != MemoryZone; i = (volatile __int32 *)*i )
    _InterlockedExchange(i + 2, (__int32)(i + 4));
  _InterlockedExchange((volatile __int32 *)MemoryZone + 2, (__int32)MemoryZone + 28);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  return 0;
}
