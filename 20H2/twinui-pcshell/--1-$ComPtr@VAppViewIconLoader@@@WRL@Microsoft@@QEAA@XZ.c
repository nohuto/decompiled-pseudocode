/*
 * XREFs of ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B70A0
 * Callers:
 *     _ShellFeedsExperienceManagerImpl::_RegisterMessages_::_1_::dtor$1 @ 0x18009F185 (_ShellFeedsExperienceManagerImpl--_RegisterMessages_--_1_--dtor$1.c)
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x1801BD4A9 (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F6B9C (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _SearchAppExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x1801F6DF9 (_SearchAppExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$1 @ 0x180339225 (_Microsoft--WRL--Details--MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Win_ea_180339225.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$0 @ 0x1803395A0 (_wil--MakeAndInitializeOrThrow_AppViewIconLoader_Windows--Internal--ComposableShell--Multitaskin.c)
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$3 @ 0x18033C13D (_AppViewIconFactory--CreateImageSource_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(a1);
}
