/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x14004AEE0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void___&__::_1_::dtor$2 @ 0x1400228F8 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_1400228F8.c)
 * Callees:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140019490 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>(
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
