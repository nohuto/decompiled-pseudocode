/*
 * XREFs of _RtlDestroyMemoryZone@4 @ 0x4B34D720
 * Callers:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 *     _RtlDestroyMemoryBlockLookaside@4 @ 0x4B34D500 (_RtlDestroyMemoryBlockLookaside@4.c)
 * Callees:
 *     _RtlpUnregisterLockedMemoryZone@0 @ 0x4B2A9977 (_RtlpUnregisterLockedMemoryZone@0.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __stdcall RtlDestroyMemoryZone(int a1)
{
  _DWORD *v1; // esi
  _DWORD *v3; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 20) )
    RtlpUnregisterLockedMemoryZone();
  v1 = *(_DWORD **)(a1 + 24);
  while ( v1 )
  {
    v3 = v1;
    v4 = v1[1];
    v1 = (_DWORD *)*v1;
    NtFreeVirtualMemory(-1, (int)&v3, (int)&v4, 0x8000);
  }
  return 0;
}
