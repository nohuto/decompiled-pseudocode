/*
 * XREFs of _RtlResetMemoryZone@4 @ 0x4B34D850
 * Callers:
 *     _RtlResetMemoryBlockLookaside@4 @ 0x4B34D5E0 (_RtlResetMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __stdcall RtlResetMemoryZone(int a1)
{
  int *i; // edx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
  for ( i = *(int **)(a1 + 24); i != (int *)a1; i = (int *)*i )
    _InterlockedExchange(i + 2, (__int32)(i + 4));
  _InterlockedExchange((volatile __int32 *)(a1 + 8), a1 + 28);
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
  return 0;
}
