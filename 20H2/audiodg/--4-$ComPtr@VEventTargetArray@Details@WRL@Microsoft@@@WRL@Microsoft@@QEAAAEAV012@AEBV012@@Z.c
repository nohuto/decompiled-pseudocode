/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140054CB8
 * Callers:
 *     ?OnModuleChanged@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUIAudioDeviceBrokerDevice@2345@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@Z @ 0x1400250F0 (-OnModuleChanged@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUIAudioDeviceBrokerDe.c)
 *     ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1400279A0 (-ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_.c)
 *     ??$DoInvoke@V_lambda_eabcc029d9695c45221ee9419ea5f562_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_eabcc029d9695c45221ee9419ea5f562_@@@Z @ 0x140053B40 (--$DoInvoke@V_lambda_eabcc029d9695c45221ee9419ea5f562_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioHistoryControl@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x140021DC0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioH.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rcx

  v2 = *a2;
  v4 = *a1;
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICPAudioHistoryControl>::InternalAddRef(
        *a2,
        (volatile int *)a2);
      v4 = *a1;
    }
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
