/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180140014
 * Callers:
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800E0464 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x1800E054C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800E1CF8 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     _ShellFeedsExperienceHelpers::GetShellFeedsRegKey_::_1_::dtor$0 @ 0x1800E1E5D (_ShellFeedsExperienceHelpers--GetShellFeedsRegKey_--_1_--dtor$0.c)
 *     _lambda_8ef4991a5d062220c31ccf3f285c5be2_::operator() @ 0x1800EEAB0 (_lambda_8ef4991a5d062220c31ccf3f285c5be2_--operator().c)
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_returncode_policy_::create_::_1_::dtor$0 @ 0x180141FA7 (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details.c)
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_exception_policy_::create_::_1_::dtor$0 @ 0x1801EBC14 (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_ea_1801EBC14.c)
 *     _VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor$0 @ 0x180434EF1 (_VirtualDesktopRegistryHelpers--EnumKeys_--_1_--dtor$0.c)
 *     _VirtualDesktopRegistryHelpers::EnumValues_::_1_::dtor$0 @ 0x18043513C (_VirtualDesktopRegistryHelpers--EnumValues_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionClsId_::_1_::dtor$0 @ 0x1804634A9 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1804634A9.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
