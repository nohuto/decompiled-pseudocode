/*
 * XREFs of _dynamic_atexit_destructor_for__g_streamMonitorManager__ @ 0x18007D770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_streamMonitorManager__()
{
  if ( qword_18019FF10 )
    std::_Ref_count_base::_Decref(qword_18019FF10);
}
