/*
 * XREFs of _GetEdgeFaviconCache_::_1_::dtor$5 @ 0x1800D3F59
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEdgeFaviconCache_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 136));
}
