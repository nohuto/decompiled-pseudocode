/*
 * XREFs of @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20
 * Callers:
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpStdGetSpaceForTrace@8 @ 0x4B369414 (_RtlpStdGetSpaceForTrace@8.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 *     _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010 (_RtlAllocateMemoryBlockLookaside@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int *__fastcall RtlpInterlockedPopEntrySList(unsigned int a1)
{
  _RTL_SRWLOCK *v2; // ebx
  int *v3; // edi
  int v4; // ecx

  v2 = &RtlpSlistLockedAltLocks + ((a1 >> 2) & 0x1F);
  RtlAcquireSRWLockExclusive(v2);
  v3 = *(int **)a1;
  if ( *(_DWORD *)a1 )
  {
    v4 = *v3;
    --*(_WORD *)(a1 + 4);
    *(_DWORD *)a1 = v4;
  }
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
