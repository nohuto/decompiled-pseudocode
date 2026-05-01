/*
 * XREFs of ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x180258374
 * Callers:
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18025A4A0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800164D4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x180240774 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ??1?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@XZ @ 0x180257C10 (--1-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAV.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180257FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180257FA0.c)
 *     ??$?4V_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@@Z @ 0x180258194 (--$-4V_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@X@-$function@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 *     ??0_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@QEAA@AEBU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@AEB$$T@Z @ 0x180259048 (--0_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@QEAA@AEBU-$MakeSafelyCopyableResult@V-$ComPtr@VApp.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,std::nullptr_t>(
        char *Parameter,
        volatile int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v13[16]; // [rsp+40h] [rbp-98h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = a3;
  v13[14] = 0LL;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 192);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 192), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
  }
LABEL_8:
  v11 = v3;
  v8 = (_QWORD *)_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_::_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_(v12, &v11, v4);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *> *)>::operator=<_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_,void>(
    v13,
    v8);
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::~MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(v12);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v3);
  v9 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
         Parameter,
         (__int64)v13);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v13);
  return v9;
}
