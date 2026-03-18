/*
 * XREFs of ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18001164C
 * Callers:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1800115DC (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1801EBEA0 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x1800F0DD0 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListBatchManager::ReturnBatchCommand(__int64 a1, CBatchCommand **a2)
{
  CBatchCommand *v2; // rbx
  CBatchCommand *v5; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  CBatchCommand *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  CBatchCommand::Destroy(*a2);
  *(_DWORD *)v2 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v8 = v5;
  result = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1 + 40, &v8, 1LL);
  if ( (int)result < 0 )
    ModuleFailFastForHRESULT((unsigned int)result, retaddr);
  return result;
}
