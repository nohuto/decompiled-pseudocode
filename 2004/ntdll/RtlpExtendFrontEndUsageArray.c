/*
 * XREFs of RtlpExtendFrontEndUsageArray @ 0x180044C5C
 * Callers:
 *     RtlpActivateLowFragmentationHeap @ 0x180044A6C (RtlpActivateLowFragmentationHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlpExtendFrontEndUsageArray(PVOID *HeapHandle, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  PVOID v6; // rdx

  if ( a2 <= *((_WORD *)HeapHandle + 216) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(HeapHandle, 0x80000Au, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = HeapHandle[53];
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *((unsigned __int16 *)HeapHandle + 216));
      RtlFreeHeap(HeapHandle, 2u, HeapHandle[53]);
    }
    HeapHandle[53] = v5;
    *((_WORD *)HeapHandle + 216) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
