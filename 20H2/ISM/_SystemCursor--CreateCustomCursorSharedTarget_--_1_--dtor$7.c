/*
 * XREFs of _SystemCursor::CreateCustomCursorSharedTarget_::_1_::dtor$7 @ 0x18013F53B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall SystemCursor::CreateCustomCursorSharedTarget_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 144));
}
