/*
 * XREFs of ??1?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000BDDC
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$0 @ 0x1801034B0 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecutionDataForAp.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$4 @ 0x180103530 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_180103530.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::dtor$0 @ 0x180103776 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--OnApplicationViewChanged_--_1_.c)
 *     _WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$11 @ 0x180104338 (_WindowEventDispatcher--TryShowAsStandaloneAsync_--_1_--dtor$11.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$5 @ 0x180157DA2 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$5.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData_::_1_::dtor$1 @ 0x180238E88 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--GetInFocusViewDat_ea_180238E88.c)
 *     _HolographicPositioner::ControlGainedForActivation_::_1_::dtor$1 @ 0x18023FB13 (_HolographicPositioner--ControlGainedForActivation_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EvaluateTakingControlOfWin32Slate_::_1_::dtor$1 @ 0x180244080 (_HolographicPositioner--_EvaluateTakingControlOfWin32Slate_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$16 @ 0x1802B42B7 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$16.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$32 @ 0x1802B4386 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$32.c)
 *     _ViewEventArgsForWindowingSettings::GetWindowingSettings_::_1_::dtor$1 @ 0x1802B5F14 (_ViewEventArgsForWindowingSettings--GetWindowingSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$11 @ 0x1802B95B1 (_WindowEventDispatcher--TryShowAsViewModeAsync_--_1_--dtor$11.c)
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
