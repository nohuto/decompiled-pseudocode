/*
 * XREFs of ?MatchStateToHomogeneousLayer@CBatchOptimizer@@CA_NAEBUSharedStateLayer@@AEBUStateBlock@2@@Z @ 0x180017E6C
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800805F0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     <none>
 */

char __fastcall CBatchOptimizer::MatchStateToHomogeneousLayer(
        const struct SharedStateLayer *a1,
        const struct SharedStateLayer::StateBlock *a2)
{
  char v2; // r8
  char v3; // al
  int v5; // eax

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return 0;
  v2 = 1;
  if ( !*((_QWORD *)a1 + 4) )
  {
    v5 = *((_DWORD *)a1 + 5);
    if ( v5 != 1 )
      return v5 == 0;
  }
  if ( *((_DWORD *)a1 + 2) != *((_DWORD *)a2 + 2) )
    return 0;
  v3 = *((_BYTE *)a1 + 12);
  if ( v3 != *((_BYTE *)a2 + 12) || v3 == 2 )
    return 0;
  return v2;
}
