/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData_::_1_::dtor$1 @ 0x1802397A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
