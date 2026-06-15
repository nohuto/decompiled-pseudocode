/*
 * XREFs of _dynamic_atexit_destructor_for__g_weakStreamMonitorManager__ @ 0x18007D790
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069C20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_weakStreamMonitorManager__()
{
  if ( qword_18019FF20 )
    std::_Ref_count_base::_Decwref(qword_18019FF20);
}
