/*
 * XREFs of @LdrpGetNewTlsVector@4 @ 0x4B2E171A
 * Callers:
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(int a1)
{
  _DWORD *Heap; // eax
  _DWORD *v3; // esi
  SIZE_T v5; // [esp-4h] [ebp-Ch]
  size_t v6; // [esp-4h] [ebp-Ch]

  LODWORD(v5) = 4 * a1 + 8;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, v5);
  if ( !Heap )
    return 0;
  *Heap = a1;
  v3 = Heap + 2;
  LODWORD(v6) = 4 * a1;
  memset(Heap + 2, 0, v6);
  return v3;
}
