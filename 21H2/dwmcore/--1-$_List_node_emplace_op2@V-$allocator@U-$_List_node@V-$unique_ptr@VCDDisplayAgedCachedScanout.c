/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180279F08
 * Callers:
 *     ??$_Emplace@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@1@QEAU21@$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x180279A50 (--$_Emplace@PEAVCDDisplayAgedCachedScanout@@@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z @ 0x180279FE0 (--_GCDDisplayAgedCachedScanout@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        __int64 a1,
        unsigned int a2)
{
  CDDisplayAgedCachedScanout **v3; // rcx

  v3 = *(CDDisplayAgedCachedScanout ***)(a1 + 8);
  if ( v3 )
  {
    if ( v3[2] )
    {
      CDDisplayAgedCachedScanout::`scalar deleting destructor'(v3[2], a2);
      v3 = *(CDDisplayAgedCachedScanout ***)(a1 + 8);
    }
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x18uLL);
  }
}
