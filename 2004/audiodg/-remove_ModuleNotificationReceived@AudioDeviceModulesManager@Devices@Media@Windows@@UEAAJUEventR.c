/*
 * XREFs of ?remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x140052140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::remove_ModuleNotificationReceived(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 9,
           (struct IUnknown *)a2.value);
}
