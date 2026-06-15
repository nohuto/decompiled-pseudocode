/*
 * XREFs of _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$8 @ 0x140058CF7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<_KSAUDIOMODULE_NOTIFICATION,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_KSAUDIOMODULE_NOTIFICATION,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 48);
}
