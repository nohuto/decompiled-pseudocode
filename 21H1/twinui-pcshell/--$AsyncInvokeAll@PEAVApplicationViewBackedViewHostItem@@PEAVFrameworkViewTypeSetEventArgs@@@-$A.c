/*
 * XREFs of ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVFrameworkViewTypeSetEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVFrameworkViewTypeSetEventArgs@@@Z @ 0x180236538
 * Callers:
 *     ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1802388F0 (-RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180015F04 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x18021D6A4 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18022D618 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180236000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180236000.c)
 *     ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@U?$MakeSafelyCopyableResult@V?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@PEAVFrameworkViewTypeSetEventArgs@@@23@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@PEAVFrameworkViewTypeSetEventArgs@@@51@@Z @ 0x180236CA8 (--$MakeAsyncCallbackCopyArgs@U-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHos.c)
 *     ?InternalAddRef@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1802384AC (-InternalAddRef@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,FrameworkViewTypeSetEventArgs *>(
        char *Parameter,
        volatile int *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v12; // [rsp+28h] [rbp-59h] BYREF
  __int64 v13; // [rsp+30h] [rbp-51h] BYREF
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v16[112]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+37h]

  v3 = *a3;
  v17 = 0LL;
  v12 = v3;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 56);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 56), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), a2);
  }
LABEL_8:
  v8 = v12;
  v12 = 0LL;
  v13 = v8;
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v12);
  v9 = *(_QWORD *)a2;
  v14 = v9;
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalAddRef(&v14);
  v15 = v9;
  v10 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::MakeAsyncCallbackCopyArgs<wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>,wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>,FrameworkViewTypeSetEventArgs *>>(
          v16,
          &v15,
          &v13);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v9);
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v13);
  if ( v10 >= 0 )
    v10 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(
            Parameter,
            (__int64)v16);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v16);
  return (unsigned int)v10;
}
