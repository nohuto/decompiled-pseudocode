/*
 * XREFs of ?__clone@?$__func@V_lambda_cbb8aaa49d81df274072e54fa35a7719_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x180255030
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ABDC0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holo.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_cbb8aaa49d81df274072e54fa35a7719_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  *a2 = &wistd::__function::__func<_lambda_cbb8aaa49d81df274072e54fa35a7719_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::AddRef(v4);
  a2[2] = *(_QWORD *)(a1 + 16);
  return Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 2);
}
