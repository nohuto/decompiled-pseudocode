/*
 * XREFs of ??$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAPEAULink@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x180196D7C
 * Callers:
 *     ??$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@QEAAPEAULink@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180196354 (--$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAXPEAULink@CTreeDumpNodeData@@0AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x1801960F8 (--$_Destroy_range@V-$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAXPEAULink@CTreeDumpNodeDat.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<CTreeDumpNodeData::Link *,CTreeDumpNodeData::Link *,std::allocator<CTreeDumpNodeData::Link>>(
        _QWORD *a1,
        _QWORD *a2,
        _OWORD *a3)
{
  _OWORD *v3; // rbx
  char *v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = (char *)((char *)a3 - (char *)a1);
    v5 = a1 + 3;
    do
    {
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4) = 0LL;
      *v3 = *(_OWORD *)(v5 - 3);
      v3[1] = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 = (_OWORD *)((char *)v3 + 40);
      *v5 = 15LL;
      *((_BYTE *)v5 - 24) = 0;
      *(_QWORD *)((char *)v5 + (_QWORD)v4 + 8) = v5[1];
      v5 += 5;
    }
    while ( v5 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<CTreeDumpNodeData::Link>>((__int64)v3, (__int64)v3);
  return v3;
}
