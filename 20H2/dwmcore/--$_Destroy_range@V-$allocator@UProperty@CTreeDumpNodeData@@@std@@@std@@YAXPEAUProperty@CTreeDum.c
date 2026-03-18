/*
 * XREFs of ??$_Destroy_range@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAXPEAUProperty@CTreeDumpNodeData@@0AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x1801542C0
 * Callers:
 *     ??$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAPEAUProperty@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x180154658 (--$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V-$allocator@UProperty@CTreeDumpNo.c)
 *     ?_Change_array@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAUProperty@CTreeDumpNodeData@@_K1@Z @ 0x1801559F8 (-_Change_array@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator@UProperty@CTreeDumpNodeData@@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D421C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CTreeDumpNodeData::Property>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::string::_Tidy_deallocate(v3 + 32);
      std::string::_Tidy_deallocate(v3);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
}
