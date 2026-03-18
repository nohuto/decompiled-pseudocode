/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800E4878
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180201868 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  int v2; // r10d
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v4; // rsi
  CProjectedShadowCaster **v5; // rbx
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v7; // rdi
  CProjectedShadowReceiver **i; // rbx

  CVisual::ClearContentTreeDataCaches(this);
  v2 = **((_DWORD **)this + 29);
  if ( (v2 & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v4 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    v5 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    if ( *(CProjectedShadowCaster ***)ProjectedShadowCasters != v4 )
    {
      do
        CProjectedShadowCaster::InvalidateMaskContent(*v5++);
      while ( v5 != v4 );
      v2 = **((_DWORD **)this + 29);
    }
  }
  if ( (v2 & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(this);
    v7 = *(CProjectedShadowReceiver ***)(ProjectedShadowReceivers + 8);
    for ( i = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers; i != v7; ++i )
      CProjectedShadowReceiver::InvalidateMaskContent(*i);
  }
}
