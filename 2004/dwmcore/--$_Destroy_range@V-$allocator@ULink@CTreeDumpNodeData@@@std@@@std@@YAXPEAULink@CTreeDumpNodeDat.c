/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAXPEAULink@CTreeDumpNodeData@@0AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x180197D78
 * Callers:
 *     ??$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAPEAULink@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x1801989FC (--$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V-$allocator@ULink@CTreeDumpNodeData@@.c)
 *     ?_Change_array@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAULink@CTreeDumpNodeData@@_K1@Z @ 0x180199444 (-_Change_array@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@ULink@CTreeDumpNodeData@@@std@@@st.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800875B4 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CTreeDumpNodeData::Link>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::string::_Tidy_deallocate(v3);
      v3 += 5;
    }
    while ( v3 != a2 );
  }
  return result;
}
