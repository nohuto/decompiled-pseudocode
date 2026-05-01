/*
 * XREFs of ??1?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18024CF30
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800A9138 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePr.c)
 *     ??1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ @ 0x1800A9DBC (--1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ.c)
 *     _wil::MakeOrThrow_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_wil::AsyncEventSerialInvocationContextToken_&__::_1_::dtor$0 @ 0x180257BAE (_wil--MakeOrThrow_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem_wil--AsyncEvent.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AAA90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Hol.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>::~ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
