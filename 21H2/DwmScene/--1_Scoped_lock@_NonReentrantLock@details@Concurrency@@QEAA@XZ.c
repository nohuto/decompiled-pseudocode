/*
 * XREFs of ??1_Scoped_lock@_NonReentrantLock@details@Concurrency@@QEAA@XZ @ 0x18008B6C8
 * Callers:
 *     unknown_libname_58 @ 0x18012BA8A (unknown_libname_58.c)
 *     sub_18012BB2D @ 0x18012BB2D (sub_18012BB2D.c)
 *     sub_18012BB45 @ 0x18012BB45 (sub_18012BB45.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x18012BB69 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_18012BB69.c)
 *     unknown_libname_59 @ 0x18012BB75 (unknown_libname_59.c)
 *     sub_18012BB81 @ 0x18012BB81 (sub_18012BB81.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_NonReentrantLock::_Scoped_lock::~_Scoped_lock(
        Concurrency::details::_NonReentrantLock::_Scoped_lock *this)
{
  **(_DWORD **)this = 0;
}
