/*
 * XREFs of _LegacyInputSinkData::LegacyInputSinkData_::_1_::dtor$1 @ 0x180044D45
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyInputSinkData::LegacyInputSinkData_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>((__int64 *)(a2 + 72));
}
