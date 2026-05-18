/*
 * XREFs of ??1_Scoped_lock@_NonReentrantLock@details@Concurrency@@QEAA@XZ @ 0x180085DF8
 * Callers:
 *     unknown_libname_56 @ 0x180126172 (unknown_libname_56.c)
 *     sub_180126215 @ 0x180126215 (sub_180126215.c)
 *     sub_18012622D @ 0x18012622D (sub_18012622D.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x180126251 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180126251.c)
 *     unknown_libname_57 @ 0x18012625D (unknown_libname_57.c)
 *     sub_180126269 @ 0x180126269 (sub_180126269.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_NonReentrantLock::_Scoped_lock::~_Scoped_lock(
        Concurrency::details::_NonReentrantLock::_Scoped_lock *this)
{
  **(_DWORD **)this = 0;
}
