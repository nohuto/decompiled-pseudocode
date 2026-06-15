/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140054EB8
 * Callers:
 *     ??$InvokeDelegates@V_lambda_1f8eca39d9ab48643c25b0657f8b112d_@@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_1f8eca39d9ab48643c25b0657f8b112d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14001FAF8 (--$InvokeDelegates@V_lambda_1f8eca39d9ab48643c25b0657f8b112d_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_684246e06c70477e7c65fe35849694f0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14001FC6C (--$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??$InvokeDelegates@V_lambda_eabcc029d9695c45221ee9419ea5f562_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_eabcc029d9695c45221ee9419ea5f562_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140053E1C (--$InvokeDelegates@V_lambda_eabcc029d9695c45221ee9419ea5f562_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioHistoryControl@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x140021EA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioH.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        volatile int *a2)
{
  volatile int *v3; // r10
  __int64 v4; // rcx

  v3 = a2;
  v4 = *a1;
  if ( (volatile int *)v4 != a2 )
  {
    if ( a2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICPAudioHistoryControl>::InternalAddRef(
        (__int64)a2,
        a2);
      v4 = *a1;
    }
    *a1 = (__int64)v3;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
