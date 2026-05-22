/*
 * XREFs of _LegacyInputSinkData::LegacyInputSinkData_::_1_::dtor$0 @ 0x180043EA9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyInputSinkData::LegacyInputSinkData_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(*(_QWORD *)(a2 + 64));
}
