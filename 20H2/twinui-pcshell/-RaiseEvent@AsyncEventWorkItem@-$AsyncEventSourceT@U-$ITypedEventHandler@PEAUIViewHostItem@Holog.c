/*
 * XREFs of ?RaiseEvent@AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAAXXZ @ 0x180241E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventWorkItem::RaiseEvent(
        __int64 a1)
{
  return Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_400cf0bc2764b957a92c04371e65a1fa_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>>(
           a1,
           *(_QWORD *)(a1 + 24),
           *(volatile int **)(a1 + 16));
}
