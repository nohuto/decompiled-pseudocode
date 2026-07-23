/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x4B365034
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x4B364DEB (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

int *RtlpHeapTrkTrackStack()
{
  ULONG v0; // ebx
  ULONG v1; // esi
  _WORD *Heap; // edi
  int v3; // edx
  int **v4; // ecx
  int *v5; // ebx
  bool v6; // zf
  ULONG v7; // ecx
  ULONG v9; // eax
  int v10; // edx
  SIZE_T v11; // [esp-4h] [ebp-124h]
  size_t v12; // [esp-4h] [ebp-124h]
  int v13; // [esp+Ch] [ebp-114h]
  ULONG BackTraceHash; // [esp+18h] [ebp-108h] BYREF
  PVOID BackTrace[64]; // [esp+1Ch] [ebp-104h] BYREF

  BackTraceHash = 0;
  v13 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, &BackTraceHash);
  BackTraceHash %= 0x1EEFu;
  v0 = BackTraceHash;
  LODWORD(v11) = 4 * v13 + 16;
  v1 = BackTraceHash & 0xF;
  Heap = RtlAllocateHeap(HeapHandle, 0, v11);
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v1));
  v3 = dword_4B3A6C5C;
  v4 = (int **)(dword_4B3A6C5C + 8 * v0);
  v5 = *v4;
  v6 = *v4 == (int *)v4;
  v7 = BackTraceHash;
  if ( v6 )
  {
LABEL_6:
    if ( Heap )
    {
      Heap[4] = v13;
      LODWORD(v12) = 4 * v13;
      Heap[5] = v7;
      *((_DWORD *)Heap + 3) = 1;
      memcpy(Heap + 8, BackTrace, v12);
      v9 = dword_4B3A6C5C + 8 * BackTraceHash;
      v10 = *(_DWORD *)v9;
      if ( *(_DWORD *)(*(_DWORD *)v9 + 4) != v9 )
        __fastfail(3u);
      *(_DWORD *)Heap = v10;
      *((_DWORD *)Heap + 1) = v9;
      *(_DWORD *)(v10 + 4) = Heap;
      *(_DWORD *)v9 = Heap;
      _InterlockedIncrement(&dword_4B3A6C58);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v1));
      return (int *)Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v1));
      return 0;
    }
  }
  while ( *((_WORD *)v5 + 4) != (_WORD)v13 )
  {
LABEL_5:
    v5 = (int *)*v5;
    if ( v5 == (int *)(v3 + 8 * v7) )
      goto LABEL_6;
  }
  LODWORD(v12) = 4 * v13;
  if ( (unsigned int)RtlCompareMemory(BackTrace, v5 + 4, v12) != 4 * v13 )
  {
    v3 = dword_4B3A6C5C;
    v7 = BackTraceHash;
    goto LABEL_5;
  }
  ++v5[3];
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v1));
  if ( Heap )
    RtlFreeHeap(HeapHandle, 0, Heap);
  return v5;
}
