/*
 * XREFs of ?erase@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@@Z @ 0x180164EE8
 * Callers:
 *     ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@_N_K@Z @ 0x180164DAC (-TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<ComputeScribbleLatencyData>::erase(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rbx

  v4 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8) = a3[1];
  --*((_QWORD *)&xmmword_180349400 + 1);
  std::_Deallocate<16,0>(a3, 0x48uLL);
  *a2 = v4;
  return a2;
}
