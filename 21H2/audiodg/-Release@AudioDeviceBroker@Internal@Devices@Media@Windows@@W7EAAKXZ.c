/*
 * XREFs of ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14002B290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::Release(__int64 a1)
{
  return Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::Release((Windows::Media::Devices::AudioDeviceModulesManager *)(a1 - 8));
}
