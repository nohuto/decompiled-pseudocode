/*
 * XREFs of _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$3 @ 0x18027EDCB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a2 + 96);
}
