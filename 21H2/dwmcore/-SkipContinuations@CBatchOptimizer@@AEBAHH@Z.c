/*
 * XREFs of ?SkipContinuations@CBatchOptimizer@@AEBAHH@Z @ 0x180080508
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x18007FFE0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801F0BD8 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBatchOptimizer::SkipContinuations(CBatchOptimizer *this, unsigned int a2)
{
  int *i; // r9

  for ( i = (int *)((char *)this + 4 * (int)a2 + 48); *((_DWORD *)this + 130 * *i + 26); ++a2 )
    ++i;
  return a2;
}
