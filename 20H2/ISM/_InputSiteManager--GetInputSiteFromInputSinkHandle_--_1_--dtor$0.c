/*
 * XREFs of _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x1800F10D3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(a2 + 32);
}
