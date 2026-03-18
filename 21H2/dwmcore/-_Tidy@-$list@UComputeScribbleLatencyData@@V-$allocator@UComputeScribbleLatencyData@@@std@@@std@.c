/*
 * XREFs of ?_Tidy@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXXZ @ 0x180100244
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_latencyData__ @ 0x18010D8A0 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_latencyData__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<ComputeScribbleLatencyData>::_Tidy(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x48uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x48uLL);
}
