/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800CD9D8
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180022150 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008A040 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800D22AC (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000C27C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000CD1C (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800102E0 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180011D60 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18009D4D8 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  __int64 v2; // rbx
  int v3; // r10d
  __int64 ProjectedShadowCasters; // rax
  __int64 v5; // r14
  CProjectedShadowCaster **v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v9; // rsi
  unsigned __int64 v10; // rdi

  CVisual::ClearContentTreeDataCaches(this);
  v2 = 0LL;
  v3 = **((_DWORD **)this + 28);
  if ( (v3 & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v5 = 0LL;
    v6 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    v7 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowCasters > *(_QWORD *)(ProjectedShadowCasters + 8) )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        CProjectedShadowCaster::InvalidateMaskContent(*v6);
        ++v5;
        ++v6;
      }
      while ( v5 != v7 );
      v3 = **((_DWORD **)this + 28);
    }
  }
  if ( (v3 & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
    v9 = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers;
    v10 = (unsigned __int64)(*(_QWORD *)(ProjectedShadowReceivers + 8) - *(_QWORD *)ProjectedShadowReceivers + 7LL) >> 3;
    if ( *(_QWORD *)ProjectedShadowReceivers > *(_QWORD *)(ProjectedShadowReceivers + 8) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        CProjectedShadowReceiver::InvalidateMaskContent(*v9);
        ++v2;
        ++v9;
      }
      while ( v2 != v10 );
    }
  }
}
