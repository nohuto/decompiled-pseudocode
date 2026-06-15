/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x14003A804
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice_void___&__::_1_::dtor$2 @ 0x14001FE5D (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_14001FE5D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void___&__::_1_::dtor$2 @ 0x14002D5C0 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_14002D5C0.c)
 * Callees:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x1400194A0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice>(
        Windows::Media::Devices::AudioDeviceModulesManager **a1)
{
  Windows::Media::Devices::AudioDeviceModulesManager *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (Windows::Media::Devices::AudioDeviceModulesManager *)Windows::Media::Devices::AudioDeviceModulesManager::Release(result);
  }
  return result;
}
