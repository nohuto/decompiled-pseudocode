/*
 * XREFs of ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00D50A8
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0091450 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddDMAReferences(struct VIDMM_ALLOC *a1, unsigned int a2)
{
  if ( a2 + *((_DWORD *)a1 + 39) == 0x7FFFFFFF )
    WdLogSingleEntry5(0LL, 270LL, 41LL, a1, *((int *)a1 + 39), 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 39, a2);
}
