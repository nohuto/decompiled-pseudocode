/*
 * XREFs of _RtlResetMemoryBlockLookaside@4 @ 0x4B34D5E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlResetMemoryZone@4 @ 0x4B34D850 (_RtlResetMemoryZone@4.c)
 */

NTSTATUS __cdecl RtlResetMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  unsigned int v1; // ecx
  _DWORD *v2; // eax
  NTSTATUS v3; // esi

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  v1 = 0;
  if ( *((_DWORD *)MemoryBlockLookaside + 5) )
  {
    v2 = (char *)MemoryBlockLookaside + 32;
    do
    {
      *v2 = 0;
      ++v1;
      v2[1] = 0;
      v2 += 4;
    }
    while ( v1 < *((_DWORD *)MemoryBlockLookaside + 5) );
  }
  v3 = RtlResetMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}
