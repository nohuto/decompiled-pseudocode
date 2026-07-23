/*
 * XREFs of _RtlpAddHeapToProtectedList@4 @ 0x4B2A91B0
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

__int16 __fastcall RtlpAddHeapToProtectedList(int a1)
{
  unsigned __int16 v1; // si
  __int16 v2; // ax
  _DWORD *Heap; // edi
  __int16 result; // ax
  PVOID v5; // ebx
  SIZE_T v6; // [esp-4h] [ebp-14h]
  size_t v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-4h]

  v8 = a1;
  v1 = RtlpNumberOfProtectedHeaps;
  *(_WORD *)((*(_DWORD *)(a1 + 8) == -571548178 ? 0 : 0x68) + a1 + 20) = -1;
  v2 = RtlpMaxNumberOfProtectedHeaps;
  if ( v1 != RtlpMaxNumberOfProtectedHeaps )
  {
    Heap = RtlpProtectedHeapsList;
LABEL_3:
    result = v1;
    RtlpNumberOfProtectedHeaps = v1 + 1;
    Heap[v1] = a1;
    return result;
  }
  RtlpMaxNumberOfProtectedHeaps *= 2;
  LODWORD(v6) = 4 * (unsigned __int16)(2 * v2);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  if ( Heap )
  {
    v1 = RtlpNumberOfProtectedHeaps;
    v5 = RtlpProtectedHeapsList;
    LODWORD(v7) = 4 * (unsigned __int16)RtlpNumberOfProtectedHeaps;
    memcpy(Heap, RtlpProtectedHeapsList, v7);
    if ( v5 != &RtlpProtectedHeapsListBuffer )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v1 = RtlpNumberOfProtectedHeaps;
    }
    a1 = v8;
    RtlpProtectedHeapsList = Heap;
    goto LABEL_3;
  }
  result = RtlpNumberOfProtectedHeaps;
  RtlpMaxNumberOfProtectedHeaps = RtlpNumberOfProtectedHeaps;
  return result;
}
