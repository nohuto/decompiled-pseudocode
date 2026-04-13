/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000CE08
 * Callers:
 *     _CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys_::_1_::dtor$0 @ 0x1800CF8AA (_CreativeFramework--LockScreenCreativeConfigHelpers--PeekLockScreenRegistryKeys_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::GetCurrentUserSidString_::_1_::dtor$0 @ 0x1800D6036 (_CreativeFramework--Actions--GetCurrentUserSidString_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::dtor$0 @ 0x1800D6128 (_CreativeFramework--Actions--SetLockScreenHotspotsService--DeleteLockScreenRegistry_ea_1800D6128.c)
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
