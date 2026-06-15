/*
 * XREFs of _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback_::_1_::dtor$3 @ 0x140022044
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>((_QWORD *)(a2 + 48));
}
