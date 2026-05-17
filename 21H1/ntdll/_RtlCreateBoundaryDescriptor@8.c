/*
 * XREFs of _RtlCreateBoundaryDescriptor@8 @ 0x4B2AA1C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

_DWORD *__stdcall RtlCreateBoundaryDescriptor(const void **a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  _DWORD *Heap; // eax
  _DWORD *v5; // esi
  int v6; // eax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 0;
  v2 = *(unsigned __int16 *)a1;
  if ( !(_WORD)v2 )
    return 0;
  if ( (v2 & 1) != 0 )
    return 0;
  v3 = (v2 + 31) & 0xFFFFFFF8;
  Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v3);
  v5 = Heap;
  if ( !Heap )
    return 0;
  Heap[2] = v3;
  Heap[1] = 1;
  *Heap = 1;
  if ( (a2 & 1) != 0 )
    Heap[3] = 1;
  v6 = *(unsigned __int16 *)a1;
  v5[4] = 1;
  v5[5] = v6 + 8;
  memcpy(v5 + 6, a1[1], *(unsigned __int16 *)a1);
  return v5;
}
