/*
 * XREFs of ?_Change_array@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAULink@CTreeDumpNodeData@@_K1@Z @ 0x180199444
 * Callers:
 *     ??$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@QEAAPEAULink@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180197FD4 (--$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAXPEAULink@CTreeDumpNodeData@@0AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x180197D78 (--$_Destroy_range@V-$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAXPEAULink@CTreeDumpNodeDat.c)
 */

__int64 __fastcall std::vector<CTreeDumpNodeData::Link>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CTreeDumpNodeData::Link>>(v6, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 40 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 40LL));
  }
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
