/*
 * XREFs of _Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___&_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&__::_1_::dtor$0 @ 0x1802AF1E3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B1E9C (--1-$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind___Windows::Internal::ApplicationModel::WindowManagement::AppViewId___Windows::Internal::ApplicationModel::WindowManagement::IWindow_____Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const_____53__enum_WindowCreatedType____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<LegacyWindowWrapper>::~ComPtr<LegacyWindowWrapper>(*(_QWORD *)(a2 + 144));
  }
  return result;
}
