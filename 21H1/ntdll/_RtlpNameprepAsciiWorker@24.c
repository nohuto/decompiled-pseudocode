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
  WCHAR *Heap; // edi
  PVOID v5; // eax
  int v6; // ecx
  void *v7; // esi
  int v8; // ebx
  SIZE_T v10; // [esp-4h] [ebp-14h]
  SIZE_T v11; // [esp-4h] [ebp-14h]

  LODWORD(v10) = 1022;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  LODWORD(v11) = 1030;
  v5 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
  v7 = v5;
  if ( Heap && v5 )
    v8 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, Heap, v6, (int)v5, v6);
  else
    v8 = -1073741801;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return v8;
}
