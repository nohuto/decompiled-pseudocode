/*
 * XREFs of _TabViewManager::CreateStaticThumbnailVisual_::_1_::dtor$3 @ 0x18026D16B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::CreateStaticThumbnailVisual_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
