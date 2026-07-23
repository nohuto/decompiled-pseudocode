/*
 * XREFs of _LdrpFreeTls@0 @ 0x4B2E6510
 * Callers:
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpCleanupThreadTlsData@0 @ 0x4B2E65A0 (_LdrpCleanupThreadTlsData@0.c)
 */

int __stdcall LdrpFreeTls()
{
  struct _TEB *v0; // esi
  void **p_ThreadLocalStoragePointer; // edi
  void **ThreadLocalStoragePointer; // esi
  void **v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // eax
  PVOID *v6; // ecx
  unsigned int v8; // [esp+10h] [ebp-8h]
  PVOID HeapHandle; // [esp+14h] [ebp-4h]

  v0 = NtCurrentTeb();
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&LdrpActiveThreadCount);
    *p_ThreadLocalStoragePointer = 0;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v3 = ThreadLocalStoragePointer - 2;
    v4 = 0;
    v5 = (unsigned int)*(ThreadLocalStoragePointer - 2);
    v8 = v5;
    if ( v5 )
    {
      do
      {
        v6 = (PVOID *)ThreadLocalStoragePointer[v4];
        if ( v6 )
        {
          RtlFreeHeap(HeapHandle, 0, *(v6 - 1));
          v5 = v8;
        }
        ++v4;
      }
      while ( v4 < v5 );
      v3 = ThreadLocalStoragePointer - 2;
    }
    RtlFreeHeap(HeapHandle, 0, v3);
  }
  return LdrpCleanupThreadTlsData();
}
