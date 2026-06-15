/*
 * XREFs of ??1?$unique_ptr@U_KSAUDIOMODULE_NOTIFICATION@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x140020D3C
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140058660 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$8 @ 0x140058AE7 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_KSAUDIOMODULE_NOTIFICATION,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_KSAUDIOMODULE_NOTIFICATION,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        __int64 a1)
{
  return wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
           a1,
           0LL);
}
