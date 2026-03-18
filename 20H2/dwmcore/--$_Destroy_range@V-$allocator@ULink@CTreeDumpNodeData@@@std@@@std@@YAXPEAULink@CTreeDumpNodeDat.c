/*
 * XREFs of ??$_Destroy_range@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAXPEAULink@CTreeDumpNodeData@@0AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x1801960F8
 * Callers:
 *     ??$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAPEAULink@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x180196D7C (--$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V-$allocator@ULink@CTreeDumpNodeData@@.c)
 *     ?_Change_array@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAULink@CTreeDumpNodeData@@_K1@Z @ 0x1801977C4 (-_Change_array@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@ULink@CTreeDumpNodeData@@@std@@@st.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D421C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CTreeDumpNodeData::Link>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::string::_Tidy_deallocate(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
}
