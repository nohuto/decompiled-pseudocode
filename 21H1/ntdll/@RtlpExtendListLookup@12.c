/*
 * XREFs of @RtlpExtendListLookup@12 @ 0x4B2B12B3
 * Callers:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 * Callees:
 *     _RtlpPopulateListIndex@8 @ 0x4B2B19E4 (_RtlpPopulateListIndex@8.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

void __fastcall RtlpExtendListLookup(int a1, _DWORD *a2, int a3)
{
  unsigned int v4; // edi
  _DWORD *Heap; // eax

  if ( !*a2 )
  {
    v4 = (2079 - a2[1]) & 0xFFFFFFE0;
    Heap = (_DWORD *)RtlAllocateHeap(a1, 8388618, (v4 >> 3) + v4 * (4 * (a2[2] != 0) + 4) + 36);
    if ( Heap )
    {
      *((_BYTE *)Heap - 1) = 1;
      Heap[1] = v4 + a2[1];
      Heap[5] = a2[1];
      Heap[2] = a2[2];
      Heap[7] = Heap + 9;
      Heap[8] = (char *)Heap + (v4 >> 3) + 36;
      Heap[6] = a2[6];
      *a2 = Heap;
      RtlpPopulateListIndex(a1, *(_DWORD *)(a1 + 180));
    }
  }
}
