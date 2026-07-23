/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x18000D0E4
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x18000D0C0 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1800FEF50 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D1EC (RtlpNameprepAsciiRealWorker.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  PVOID Heap; // rdi
  PVOID v11; // rax
  void *v12; // rbx
  unsigned int v13; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v12 = v11;
  if ( Heap && v11 )
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Heap);
  else
    v13 = -1073741801;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  return v13;
}
