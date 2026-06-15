/*
 * XREFs of ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x1400509F0
 * Callers:
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x140020700 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x140020710 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
