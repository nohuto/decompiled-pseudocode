/*
 * XREFs of _dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__ @ 0x18007D800
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__()
{
  if ( qword_18019FB10 )
    std::_Ref_count_base::_Decref(qword_18019FB10);
}
