/*
 * XREFs of ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B7490
 * Callers:
 *     _ShellFeedsExperienceManagerImpl::_RegisterMessages_::_1_::dtor$1 @ 0x18009DD25 (_ShellFeedsExperienceManagerImpl--_RegisterMessages_--_1_--dtor$1.c)
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x1801BD939 (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _SearchAppExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x1801F75C3 (_SearchAppExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$1 @ 0x180339C85 (_Microsoft--WRL--Details--MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Win_ea_180339C85.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$0 @ 0x18033A000 (_wil--MakeAndInitializeOrThrow_AppViewIconLoader_Windows--Internal--ComposableShell--Multitaskin.c)
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$3 @ 0x18033CB9D (_AppViewIconFactory--CreateImageSource_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(a1);
}
