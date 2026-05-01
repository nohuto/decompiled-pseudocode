/*
 * XREFs of _TabViewManager::OnThumbnailRequested_::_1_::dtor$9 @ 0x180274C2B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::OnThumbnailRequested_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 256));
}
