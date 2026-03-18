/*
 * XREFs of ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180065038
 * Callers:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180064FC8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCResource@@@1@V-$tuple@$$V@1@@-$_List_node_e.c)
 *     ??0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z @ 0x180065068 (--0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x1800F7810 (--0-$list@UComputeScribbleLatencyData@@V-$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEA.c)
 *     ??$?0AEBUComputeScribbleLatencyData@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UComputeScribbleLatencyData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UComputeScribbleLatencyData@@PEAX@std@@@1@AEBUComputeScribbleLatencyData@@@Z @ 0x1801D7D84 (--$-0AEBUComputeScribbleLatencyData@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCompu.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E9090 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801854E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<72>(unsigned __int64 a1)
{
  if ( a1 > 0x38E38E38E38E38ELL )
    std::_Throw_bad_array_new_length();
  return 72 * a1;
}
