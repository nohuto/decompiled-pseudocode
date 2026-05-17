/*
 * XREFs of _RtlpNameprepAsciiWorker@24 @ 0x4B2E58F1
 * Callers:
 *     _RtlIdnToAscii@20 @ 0x4B2E58D0 (_RtlIdnToAscii@20.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 *     _RtlIdnToNameprepUnicode@20 @ 0x4B3652D0 (_RtlIdnToNameprepUnicode@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpNameprepAsciiRealWorker@40 @ 0x4B2E598C (_RtlpNameprepAsciiRealWorker@40.c)
 */

int __stdcall RtlpNameprepAsciiWorker(int a1, void *a2, int a3, char a4)
{
  void *Heap; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // ebx

  Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 1022);
  v5 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 1030);
  v7 = v5;
  if ( Heap && v5 )
    v8 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, Heap, v6, v5, v6);
  else
    v8 = -1073741801;
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  if ( v7 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
  return v8;
}
