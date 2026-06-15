/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D5A4C
 * Callers:
 *     _CAudioSessionStore::Commit_::_1_::dtor$1 @ 0x180075C3D (_CAudioSessionStore--Commit_--_1_--dtor$1.c)
 *     _CAudioSessionStore::Commit_::_1_::dtor$3 @ 0x180075C62 (_CAudioSessionStore--Commit_--_1_--dtor$3.c)
 *     _CreateLowRightsRegistryKey_::_1_::dtor$1 @ 0x180075D16 (_CreateLowRightsRegistryKey_--_1_--dtor$1.c)
 *     _CAudioSessionStore::OpenSessionKey_::_1_::dtor$6 @ 0x18007C48F (_CAudioSessionStore--OpenSessionKey_--_1_--dtor$6.c)
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_returncode_policy_::create_::_1_::dtor$0 @ 0x18007CFD6 (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$1 @ 0x18007D19C (_CConstraintModel--Initialize_--_1_--dtor$1.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$2 @ 0x18007D1AE (_CConstraintModel--Initialize_--_1_--dtor$2.c)
 *     _GetContainerProperty_::_1_::dtor$1 @ 0x1800ECE3F (_GetContainerProperty_--_1_--dtor$1.c)
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
