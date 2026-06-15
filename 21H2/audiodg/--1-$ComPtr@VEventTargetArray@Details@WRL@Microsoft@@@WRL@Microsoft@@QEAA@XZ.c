/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x140054B78
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_1f8eca39d9ab48643c25b0657f8b112d__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x14001FC59 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_1f8eca39d9ab48643c25b0657f8b112d__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_684246e06c70477e7c65fe35849694f0__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______::_1_::dtor$0 @ 0x14001FDCD (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_684246e06c70477e7c65fe35849694f0__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_eabcc029d9695c45221ee9419ea5f562__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs______::_1_::dtor$0 @ 0x140053F7F (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_eabcc029d9695c45221ee9419ea5f562__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}
