/*
 * XREFs of _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1801B0BD2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CStartExperienceManager::OnEventQueued_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 48));
}
