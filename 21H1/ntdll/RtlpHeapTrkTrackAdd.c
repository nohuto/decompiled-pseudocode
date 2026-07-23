/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x4B364DEB
 * Callers:
 *     _RtlpHeapTrkInterceptor@16 @ 0x4B3648D0 (_RtlpHeapTrkInterceptor@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     RtlpHeapTrkHash @ 0x4B364861 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x4B365034 (RtlpHeapTrkTrackStack.c)
 */

void __fastcall RtlpHeapTrkTrackAdd(int a1, void *a2)
{
  _DWORD *Heap; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  SIZE_T v9; // [esp-4h] [ebp-10h]

  LODWORD(v9) = 20;
  Heap = RtlAllocateHeap(HeapHandle, 0, v9);
  if ( Heap )
  {
    v4 = RtlpHeapTrkHash(a2);
    Heap[3] = a2;
    Heap[2] = a1;
    v5 = RtlpHeapTrkTrackStack();
    Heap[4] = v5;
    if ( v5 )
    {
      v6 = v4 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * v6));
      v7 = dword_4B3A6C54 + 8 * v4;
      v8 = *(_DWORD *)v7;
      if ( *(_DWORD *)(*(_DWORD *)v7 + 4) != v7 )
        __fastfail(3u);
      *Heap = v8;
      Heap[1] = v7;
      *(_DWORD *)(v8 + 4) = Heap;
      *(_DWORD *)v7 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * v6));
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
    }
  }
}
