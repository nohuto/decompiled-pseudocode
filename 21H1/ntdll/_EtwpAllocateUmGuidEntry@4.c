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

_RTL_BALANCED_NODE *__thiscall EtwpAllocateUmGuidEntry(_RTL_BALANCED_NODE **this)
{
  _RTL_BALANCED_NODE *Heap; // eax
  _RTL_BALANCED_NODE *v3; // ebx
  _RTL_BALANCED_NODE **v4; // esi
  SIZE_T v6; // [esp-4h] [ebp-10h]
  size_t v7; // [esp-4h] [ebp-10h]

  LODWORD(v6) = 152;
  Heap = (_RTL_BALANCED_NODE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  v3 = Heap;
  if ( Heap )
  {
    LODWORD(v7) = 152;
    memset(Heap, 0, v7);
    v3[1].Children[0] = *this;
    v4 = this + 1;
    v3[1].Children[1] = *v4++;
    v3[1].ParentValue = (unsigned int)*v4;
    v3[2].Children[0] = v4[1];
    v3[3].Children[0] = (_RTL_BALANCED_NODE *)1;
    EtwpInsertGuidEntry(v3);
  }
  return v3;
}
