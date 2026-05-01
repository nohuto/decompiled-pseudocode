/*
 * XREFs of ?UnsubscribeFromServices@HolographicViewHostItemLedger@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802491D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 */

__int64 __fastcall HolographicViewHostItemLedger::UnsubscribeFromServices(
        HolographicViewHostItemLedger *this,
        struct IServiceProvider *a2)
{
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 18);
  return 0LL;
}
