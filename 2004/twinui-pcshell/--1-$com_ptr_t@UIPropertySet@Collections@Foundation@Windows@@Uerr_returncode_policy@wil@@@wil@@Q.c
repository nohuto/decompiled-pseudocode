/*
 * XREFs of ??1?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800182EC
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$0 @ 0x180102300 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecutionDataForAp.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$4 @ 0x180102380 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_180102380.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1801025C6 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--OnApplicationViewChanged_--_1_.c)
 *     _WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$11 @ 0x180102F77 (_WindowEventDispatcher--TryShowAsStandaloneAsync_--_1_--dtor$11.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$5 @ 0x180157F52 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$5.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData_::_1_::dtor$1 @ 0x1802397A8 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--GetInFocusViewDat_ea_1802397A8.c)
 *     _HolographicPositioner::ControlGainedForActivation_::_1_::dtor$1 @ 0x180240433 (_HolographicPositioner--ControlGainedForActivation_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor$1 @ 0x1802449A0 (_HolographicPositioner--_EvaluateTakingControlOfWin32Slate_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$16 @ 0x1802B4BA7 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$16.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$32 @ 0x1802B4C76 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$32.c)
 *     _ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor$1 @ 0x1802B6804 (_ViewEventArgsForWindowingSettings--GetWindowingSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$11 @ 0x1802B9EA1 (_WindowEventDispatcher--TryShowAsViewModeAsync_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
