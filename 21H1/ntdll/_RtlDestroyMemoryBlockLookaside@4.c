/*
 * XREFs of _RtlDestroyMemoryBlockLookaside@4 @ 0x4B34D500
 * Callers:
 *     _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32 (_RtlpInitializeStackTraceLog@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpUnregisterLockedMemoryBlockLookaside@0 @ 0x4B34D6DA (_RtlpUnregisterLockedMemoryBlockLookaside@0.c)
 *     _RtlDestroyMemoryZone@4 @ 0x4B34D720 (_RtlDestroyMemoryZone@4.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  void *v1; // edi
  void *v2; // ebx
  int v3; // esi
  NTSTATUS result; // eax

  v1 = (void *)*((_DWORD *)MemoryBlockLookaside + 2);
  v2 = (void *)*((_DWORD *)MemoryBlockLookaside + 1);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 6) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v3 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v2);
  if ( v3 < 0 )
    return v3;
  return result;
}
