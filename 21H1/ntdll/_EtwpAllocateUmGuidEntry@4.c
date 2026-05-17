/*
 * XREFs of _EtwpAllocateUmGuidEntry@4 @ 0x4B2F2509
 * Callers:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _EtwpInsertGuidEntry@4 @ 0x4B2F2551 (_EtwpInsertGuidEntry@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

_DWORD *__thiscall EtwpAllocateUmGuidEntry(_DWORD *this)
{
  _DWORD *Heap; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // esi

  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 152);
  v3 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x98u);
    v3[3] = *this;
    v4 = this + 1;
    v3[4] = *v4++;
    v3[5] = *v4;
    v3[6] = v4[1];
    v3[9] = 1;
    EtwpInsertGuidEntry(v3);
  }
  return v3;
}
