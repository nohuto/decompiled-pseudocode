/*
 * XREFs of _CopyFaviconToEdge_::_1_::dtor$9 @ 0x1800D4013
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyFaviconToEdge_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
