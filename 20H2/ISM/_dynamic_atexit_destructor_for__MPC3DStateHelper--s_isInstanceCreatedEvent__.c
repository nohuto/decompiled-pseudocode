/*
 * XREFs of _dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180051800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__(__int64 a1, void *a2)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)&MPC3DStateHelper::s_isInstanceCreatedEvent,
    a2);
}
