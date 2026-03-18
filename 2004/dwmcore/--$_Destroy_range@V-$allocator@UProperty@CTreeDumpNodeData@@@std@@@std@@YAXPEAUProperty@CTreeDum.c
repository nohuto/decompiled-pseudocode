/*
 * XREFs of ??$_Destroy_range@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAXPEAUProperty@CTreeDumpNodeData@@0AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x180156118
 * Callers:
 *     ??$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAPEAUProperty@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x1801564B0 (--$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V-$allocator@UProperty@CTreeDumpNo.c)
 *     ?_Change_array@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAUProperty@CTreeDumpNodeData@@_K1@Z @ 0x180157848 (-_Change_array@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator@UProperty@CTreeDumpNodeData@@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800875B4 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CTreeDumpNodeData::Property>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::string::_Tidy_deallocate(v3 + 4);
      result = std::string::_Tidy_deallocate(v3);
      v3 += 8;
    }
    while ( v3 != a2 );
  }
  return result;
}
