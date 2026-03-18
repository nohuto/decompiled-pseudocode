/*
 * XREFs of ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0023BF8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008B90 (VidSchiProcessDpcCompletedPacket.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0023C78 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C006EA30 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveDMAReferences(struct VIDMM_ALLOC *a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rbx
  _QWORD *v5; // rax

  v2 = a2;
  if ( *((_DWORD *)a1 + 39) < (int)a2 )
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
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 39, -v2);
}
