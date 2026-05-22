/*
 * XREFs of _CustomCursorApplication::CreateSharedVisual_::_1_::dtor$4 @ 0x18013F897
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CustomCursorApplication::CreateSharedVisual_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 144));
}
