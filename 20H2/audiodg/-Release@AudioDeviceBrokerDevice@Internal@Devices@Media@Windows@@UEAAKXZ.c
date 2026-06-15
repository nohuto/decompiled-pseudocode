/*
 * XREFs of ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140019FE0
 * Callers:
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14002B1C0 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14002B1D0 (-Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::Release(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  return Windows::Media::Devices::AudioDeviceModulesManager::Release(this);
}
