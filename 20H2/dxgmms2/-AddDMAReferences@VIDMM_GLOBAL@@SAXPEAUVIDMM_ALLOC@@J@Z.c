/*
 * XREFs of ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00AEBF0
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0071F90 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddDMAReferences(struct VIDMM_ALLOC *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  _QWORD *v5; // rax

  v2 = a2;
  if ( (_DWORD)a2 + *((_DWORD *)a1 + 39) == 0x7FFFFFFF )
  {
    v4 = *((int *)a1 + 39);
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 41LL;
    v5[5] = a1;
    v5[6] = v4;
    WdLogEvent5_WdCriticalError(v5);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 39, v2);
}
