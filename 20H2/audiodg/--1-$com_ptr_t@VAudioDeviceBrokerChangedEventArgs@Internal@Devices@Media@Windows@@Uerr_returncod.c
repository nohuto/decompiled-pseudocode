/*
 * XREFs of ??1?$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140020C8C
 * Callers:
 *     ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140021E20 (-CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHC.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback_::_1_::dtor$3 @ 0x140022044 (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--CMModulesNotificationC_ea_140022044.c)
 *     ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1400279A0 (-ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback_::_1_::dtor$1 @ 0x140027BB5 (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--ThreadpoolCallback_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400598B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_1400598B0.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release();
  return result;
}
