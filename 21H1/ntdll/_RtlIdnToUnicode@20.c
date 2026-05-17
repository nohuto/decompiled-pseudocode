/*
 * XREFs of _RtlIdnToUnicode@20 @ 0x4B365300
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D (_RtlpIdnToUnicodeWorker@28.c)
 */

int __stdcall RtlIdnToUnicode(int a1, int a2, int a3, void *a4, int a5)
{
  void *Heap; // eax
  int v6; // ecx
  int v7; // edi
  int v9; // esi

  Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 1022);
  v7 = (int)Heap;
  if ( !Heap )
    return -1073741801;
  v9 = RtlpIdnToUnicodeWorker(a3, a4, a5, Heap, v6);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
  return v9;
}
