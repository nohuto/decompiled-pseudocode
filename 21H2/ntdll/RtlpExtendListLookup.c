/*
 * XREFs of RtlpExtendListLookup @ 0x180009574
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlpPopulateListIndex @ 0x18000A600 (RtlpPopulateListIndex.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

void __fastcall RtlpExtendListLookup(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbp
  __int64 Heap; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    v5 = (unsigned __int64)v4 >> 3;
    Heap = RtlAllocateHeap(a1, 8388618LL, v4 * (*(_DWORD *)(a2 + 12) != 0 ? 16LL : 8LL) + v5 + 56);
    if ( Heap )
    {
      *(_BYTE *)(Heap - 1) = 1;
      *(_DWORD *)(Heap + 8) = v4 + *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap + 24) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(Heap + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(Heap + 40) = Heap + 56;
      *(_QWORD *)(Heap + 48) = v5 + Heap + 56;
      *(_QWORD *)(Heap + 32) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap;
      RtlpPopulateListIndex(a1, *(_QWORD *)(a1 + 312));
    }
  }
}
