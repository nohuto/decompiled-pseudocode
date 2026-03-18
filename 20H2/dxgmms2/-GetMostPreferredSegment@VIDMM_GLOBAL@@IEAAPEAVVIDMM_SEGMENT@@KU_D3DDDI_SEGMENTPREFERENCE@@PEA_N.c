/*
 * XREFs of ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0084D24
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E110 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0084770 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00B5A44 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT *__fastcall VIDMM_GLOBAL::GetMostPreferredSegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DDDI_SEGMENTPREFERENCE a3,
        bool *a4)
{
  __int64 v4; // r10
  UINT v6; // r8d

  v4 = 0LL;
  if ( a3.0 )
  {
    if ( (*(_BYTE *)&a3.0 & 0x1F) != 0 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 464)
                     + 8LL * ((*(_BYTE *)&a3.0 & 0x1Fu) + *(_DWORD *)(1584LL * a2 + *((_QWORD *)this + 5027) + 20) - 1));
      *a4 = *(_BYTE *)(v4 + 80) & 1;
    }
    else
    {
      v6 = (a3.Value >> 6) & 0x1F;
      if ( v6 )
        return *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                        + 8LL * (v6 + *(_DWORD *)(1584LL * a2 + *((_QWORD *)this + 5027) + 20) - 1));
    }
  }
  return (struct VIDMM_SEGMENT *)v4;
}
