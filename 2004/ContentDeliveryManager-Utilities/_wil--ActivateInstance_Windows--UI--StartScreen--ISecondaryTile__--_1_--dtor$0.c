/*
 * XREFs of _wil::ActivateInstance_Windows::UI::StartScreen::ISecondaryTile__::_1_::dtor$0 @ 0x1800D1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ActivateInstance_Windows::UI::StartScreen::ISecondaryTile__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
