/*
 * XREFs of _RtlDestroyMemoryBlockLookaside@4 @ 0x4B34D500
 * Callers:
 *     _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32 (_RtlpInitializeStackTraceLog@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlpUnregisterLockedMemoryBlockLookaside@0 @ 0x4B34D6DA (_RtlpUnregisterLockedMemoryBlockLookaside@0.c)
 *     _RtlDestroyMemoryZone@4 @ 0x4B34D720 (_RtlDestroyMemoryZone@4.c)
 */

int __stdcall RtlDestroyMemoryBlockLookaside(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int result; // eax

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 4);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  if ( *(_DWORD *)(a1 + 24) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v3 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v2);
  if ( v3 < 0 )
    return v3;
  return result;
}
