/*
 * XREFs of ??$?0AEBUComputeScribbleLatencyData@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UComputeScribbleLatencyData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UComputeScribbleLatencyData@@PEAX@std@@@1@AEBUComputeScribbleLatencyData@@@Z @ 0x1801D7D84
 * Callers:
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBUComputeScribbleLatencyData@@@Z @ 0x1801D7DE8 (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBUComputeScribbleLatencyData@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180065038 (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<ComputeScribbleLatencyData,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<ComputeScribbleLatencyData,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  SIZE_T size_of; // rax
  __int64 v6; // rax

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v6;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)a3;
  *(_OWORD *)(v6 + 32) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v6 + 48) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(v6 + 64) = *(_QWORD *)(a3 + 48);
  return a1;
}
