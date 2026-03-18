/*
 * XREFs of ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18007B928
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800B19B0 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007B998 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 */

_QWORD *__fastcall CDrawListBatchManager::CloseCurrentDrawListEntryBatch(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  CBatchOptimizer *v6; // rcx
  __int64 v7; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    v6 = *(CBatchOptimizer **)(a1 + 176);
    if ( v6 )
    {
      CBatchOptimizer::Flush(v6);
      v4 = *(_QWORD *)(a1 + 168);
    }
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 168) = 0LL;
    v3 = v7;
  }
  *a2 = v3;
  return a2;
}
