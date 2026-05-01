/*
 * XREFs of ??1?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@XZ @ 0x1802572F0
 * Callers:
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800ACB78 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs.c)
 *     ??1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ @ 0x1800ACC8C (--1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ.c)
 *     _wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken_&__::_1_::dtor$0 @ 0x1802571DA (_wil--MakeOrThrow_ApplicationViewBackedViewHostItem_wil--AsyncEventSerialInvocationContextToken_.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x180257A54 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180257680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180257680.c)
 */

__int64 __fastcall wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::~MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
