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

signed __int32 __fastcall RtlpHeapTrkTrackAdd(int a1, void *a2)
{
  signed __int32 result; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx

  result = RtlAllocateHeap(dword_4B3A6D94, 0, 20);
  v4 = (_DWORD *)result;
  if ( result )
  {
    v5 = RtlpHeapTrkHash(a2);
    v4[3] = a2;
    v4[2] = a1;
    v6 = RtlpHeapTrkTrackStack();
    v4[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * v7));
      v8 = dword_4B3A6C54 + 8 * v5;
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)(*(_DWORD *)v8 + 4) != v8 )
        __fastfail(3u);
      *v4 = v9;
      v4[1] = v8;
      *(_DWORD *)(v9 + 4) = v4;
      *(_DWORD *)v8 = v4;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * v7));
    }
    else
    {
      return RtlFreeHeap(dword_4B3A6D94, 0, (int)v4);
    }
  }
  return result;
}
