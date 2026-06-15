/*
 * XREFs of ?QueryInterface@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::QueryInterface(
           (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)(a1 - 16),
           a2,
           a3);
}
