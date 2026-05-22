/*
 * XREFs of ?OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x180045930
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801014C0 (-reset@-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEA.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnDisconnected(ShellGesturesClientProxy *this)
{
  wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
    (char *)this + 96,
    0LL);
  return 0LL;
}
