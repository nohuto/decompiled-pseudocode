/*
 * XREFs of ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002B100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
           (Windows::Media::Devices::Internal::AudioDeviceBroker *)(a1 - 16),
           a2,
           a3);
}
