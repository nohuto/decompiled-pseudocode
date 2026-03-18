/*
 * XREFs of ?_Tidy@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXXZ @ 0x1800E20C0
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_latencyData__ @ 0x1800F3CF0 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_latencyData__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void std::list<ComputeScribbleLatencyData>::_Tidy()
{
  _QWORD **v0; // rcx
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v0 = (_QWORD **)xmmword_180349400;
  **(_QWORD **)(xmmword_180349400 + 8) = 0LL;
  v1 = *v0;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v1, 0x48uLL);
      v1 = v2;
    }
    while ( v2 );
  }
  std::_Deallocate<16,0>((void *)xmmword_180349400, 0x48uLL);
}
