/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x1800835EC
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043544 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800452A0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwpInsertGuidEntry @ 0x18008365C (EtwpInsertGuidEntry.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(_OWORD *a1)
{
  char *Heap; // rax
  char *v3; // rbx

  Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 176LL);
  v3 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry(v3);
  }
  return v3;
}
