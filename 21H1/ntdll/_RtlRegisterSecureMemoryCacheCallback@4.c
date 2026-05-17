/*
 * XREFs of _RtlRegisterSecureMemoryCacheCallback@4 @ 0x4B35E530
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 */

NTSTATUS __stdcall RtlRegisterSecureMemoryCacheCallback(int a1)
{
  NTSTATUS result; // eax
  int Heap; // eax
  int v3; // esi
  int *v4; // eax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 4u, 0);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 16);
    v3 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 8) = 1;
      *(_DWORD *)(Heap + 12) = a1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v4 = (int *)off_4B3A37A0;
      if ( *off_4B3A37A0 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *(_DWORD *)v3 = &RtlpSecMemListHead;
      *(_DWORD *)(v3 + 4) = v4;
      *v4 = v3;
      off_4B3A37A0 = (_UNKNOWN **)v3;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
