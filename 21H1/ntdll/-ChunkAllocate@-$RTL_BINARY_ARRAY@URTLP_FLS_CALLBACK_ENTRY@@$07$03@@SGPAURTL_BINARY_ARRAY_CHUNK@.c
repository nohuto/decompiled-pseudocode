/*
 * XREFs of ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z @ 0x4B2E5624
 * Callers:
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGKPAU1@@Z @ 0x4B2E55C5 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGKPAU1@@Z.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

_DWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::ChunkAllocate(int a1, int a2)
{
  int v3; // esi
  _DWORD *Heap; // ecx
  _DWORD *v5; // eax
  SIZE_T v7; // [esp-4h] [ebp-10h]

  v3 = 1 << (a2 + 4);
  LODWORD(v7) = 8 * v3 + 4;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( Heap )
  {
    *Heap = 0;
    Heap[1] = 0;
    Heap[2] = 0;
    if ( v3 )
    {
      v5 = Heap + 1;
      do
      {
        *v5 = 0;
        v5 += 2;
        *(v5 - 1) = 0;
        --v3;
      }
      while ( v3 );
    }
    *(_DWORD *)(a1 + 4 * a2) = Heap;
  }
  return Heap;
}
