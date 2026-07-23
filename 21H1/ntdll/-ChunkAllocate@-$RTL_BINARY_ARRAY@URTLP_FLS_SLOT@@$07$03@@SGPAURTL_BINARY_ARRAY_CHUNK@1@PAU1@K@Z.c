/*
 * XREFs of ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGPAURTL_BINARY_ARRAY_CHUNK@1@PAU1@K@Z @ 0x4B2DBF63
 * Callers:
 *     _RtlFlsSetValue@8 @ 0x4B2DBE50 (_RtlFlsSetValue@8.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGJPAU1@KURTLP_FLS_SLOT@@K@Z @ 0x4B2E8936 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGJPAU1@KURTLP_FLS_SLOT@@K@Z.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

_DWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(int a1, int a2)
{
  int v3; // edi
  _DWORD *Heap; // eax
  _DWORD *v5; // esi
  SIZE_T v7; // [esp-4h] [ebp-14h]
  size_t v8; // [esp-4h] [ebp-14h]

  v3 = 1 << (a2 + 4);
  LODWORD(v7) = 4 * v3 + 4;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  v5 = Heap;
  if ( Heap )
  {
    *Heap = 0;
    Heap[1] = 0;
    if ( v3 )
    {
      LODWORD(v8) = 4 * v3;
      memset(Heap + 1, 0, v8);
    }
    *(_DWORD *)(a1 + 4 * a2) = v5;
  }
  return v5;
}
