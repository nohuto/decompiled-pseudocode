/*
 * XREFs of _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$1 @ 0x1800CE4BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 144));
}
