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

NTSTATUS __cdecl RtlRegisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  int v1; // esi
  NTSTATUS result; // eax
  _DWORD *Heap; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  SIZE_T v6; // [esp-8h] [ebp-8h]

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 4u, 0);
  if ( result >= 0 )
  {
    HIDWORD(v6) = v1;
    LODWORD(v6) = 16;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    v4 = Heap;
    if ( Heap )
    {
      Heap[2] = 1;
      Heap[3] = Callback;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v5 = off_4B3A37A0;
      if ( *off_4B3A37A0 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *v4 = &RtlpSecMemListHead;
      v4[1] = v5;
      *v5 = v4;
      off_4B3A37A0 = (_UNKNOWN **)v4;
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
