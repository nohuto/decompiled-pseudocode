/*
 * XREFs of ??$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAPEAUProperty@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x1801564B0
 * Callers:
 *     ??$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAPEAUProperty@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x1801561E0 (--$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$al.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAXPEAUProperty@CTreeDumpNodeData@@0AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x180156118 (--$_Destroy_range@V-$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAXPEAUProperty@CTreeDum.c)
 */

__int64 __fastcall std::_Uninitialized_move<CTreeDumpNodeData::Property *,CTreeDumpNodeData::Property *,std::allocator<CTreeDumpNodeData::Property>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 - (_QWORD)a1;
    v5 = a1 + 7;
    do
    {
      *(_QWORD *)((char *)v5 + v4 - 40) = 0LL;
      *(_QWORD *)((char *)v5 + v4 - 32) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v5 - 7);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v5 - 5);
      *(v5 - 5) = 0LL;
      v3 += 64LL;
      *(v5 - 4) = 15LL;
      *((_BYTE *)v5 - 56) = 0;
      *(_QWORD *)((char *)v5 + v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + v4) = 0LL;
      *(_OWORD *)((char *)v5 + v4 - 24) = *(_OWORD *)(v5 - 3);
      *(_OWORD *)((char *)v5 + v4 - 8) = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      *v5 = 15LL;
      *((_BYTE *)v5 - 24) = 0;
      v5 += 8;
    }
    while ( v5 - 7 != a2 );
  }
  std::_Destroy_range<std::allocator<CTreeDumpNodeData::Property>>((_QWORD *)v3, (_QWORD *)v3);
  return v3;
}
