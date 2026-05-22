/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180106C04
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient___Windows::Internal::Input::MPCManager::HomeGestureEventArgs______::_1_::dtor$0 @ 0x180106380 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d0f00b216f9e073402124dc24bf27ba2__Win.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x180106D1C (--1MPCManagerClient@@UEAA@XZ.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCConstantManagerClient___Windows::Internal::Input::MPCManager::ConstantChangedEventArgs______::_1_::dtor$0 @ 0x18010EA2B (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_68c34cd287e5a2a74578b99ce0d07767__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D3E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

int __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v2) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
                    v2,
                    a2);
  }
  return v2;
}
