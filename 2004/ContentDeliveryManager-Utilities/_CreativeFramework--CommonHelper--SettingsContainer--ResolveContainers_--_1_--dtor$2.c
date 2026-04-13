/*
 * XREFs of _CreativeFramework::CommonHelper::SettingsContainer::ResolveContainers_::_1_::dtor$2 @ 0x1800D7EC7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::CommonHelper::SettingsContainer::ResolveContainers_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
