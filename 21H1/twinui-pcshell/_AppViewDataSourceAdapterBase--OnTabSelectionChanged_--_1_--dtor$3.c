/*
 * XREFs of _AppViewDataSourceAdapterBase::OnTabSelectionChanged_::_1_::dtor$3 @ 0x18031D91D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapterBase::OnTabSelectionChanged_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
