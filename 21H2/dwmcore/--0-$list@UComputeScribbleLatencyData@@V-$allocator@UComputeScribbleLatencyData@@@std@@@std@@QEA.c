/*
 * XREFs of ??0?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x1800F7810
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_latencyData__ @ 0x180001440 (_anonymous_namespace_--_dynamic_initializer_for__g_latencyData__.c)
 * Callees:
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180065038 (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::list<ComputeScribbleLatencyData>::list<ComputeScribbleLatencyData>()
{
  SIZE_T size_of; // rax
  _QWORD *v1; // rax

  xmmword_1803D3808 = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v1 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v1 = v1;
  v1[1] = v1;
  *(_QWORD *)&xmmword_1803D3808 = v1;
  return &xmmword_1803D3808;
}
