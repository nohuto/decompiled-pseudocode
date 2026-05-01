/*
 * XREFs of ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800ACB78
 * Callers:
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x180259EC0 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?InternalAddRef@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ @ 0x1800AC37C (-InternalAddRef@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AC3C8 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MakeSafelyCopyable@?$MakeSafelyCopyablTraitsIUnknown@PEAVViewSizePreferencesChangedEventArgsImpl@@@details@wil@@SA?AU?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgsImpl@@@23@PEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800AC4EC (-MakeSafelyCopyable@-$MakeSafelyCopyablTraitsIUnknown@PEAVViewSizePreferencesChangedEventArgsImp.c)
 *     ??0?$__func@V_lambda_85c2feea8e3a39098c83caf73af413d2_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@QEAA@$$QEAV_lambda_85c2feea8e3a39098c83caf73af413d2_@@@Z @ 0x1800ACC44 (--0-$__func@V_lambda_85c2feea8e3a39098c83caf73af413d2_@@$$A6AJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ??1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ @ 0x1800ACC8C (--1_lambda_85c2feea8e3a39098c83caf73af413d2_@@QEAA@XZ.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180140064 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x18023FE54 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ??1?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@XZ @ 0x1802572F0 (--1-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAV.c)
 *     wil::details::MakeSafelyCopyable_ApplicationViewBackedViewHostItem___ @ 0x180258408 (wil--details--MakeSafelyCopyable_ApplicationViewBackedViewHostItem___.c)
 *     ??0?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@QEAA@AEBU012@@Z @ 0x180258814 (--0-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAV.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,ViewSizePreferencesChangedEventArgsImpl *>(
        PVOID Parameter,
        __int64 a2,
        __int64 *a3)
{
  __int64 SafelyCopyable_ApplicationViewBackedViewHostItem; // rax
  __int64 v7; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v9; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v12[104]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]

  v13 = 0LL;
  wil::details::MakeSafelyCopyablTraitsIUnknown<ViewSizePreferencesChangedEventArgsImpl *>::MakeSafelyCopyable(&v7, *a3);
  SafelyCopyable_ApplicationViewBackedViewHostItem = wil::details::MakeSafelyCopyable_ApplicationViewBackedViewHostItem___(
                                                       v10,
                                                       a2);
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(
    v8,
    SafelyCopyable_ApplicationViewBackedViewHostItem);
  v9 = v7;
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalAddRef(&v9);
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(v11);
  v13 = wistd::__function::__func<_lambda_85c2feea8e3a39098c83caf73af413d2_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::__func<_lambda_85c2feea8e3a39098c83caf73af413d2_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>(
          v12,
          v8);
  _lambda_85c2feea8e3a39098c83caf73af413d2_::~_lambda_85c2feea8e3a39098c83caf73af413d2_((_lambda_85c2feea8e3a39098c83caf73af413d2_ *)v8);
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>::~MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>,ApplicationViewBackedViewHostItem *>(v10);
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease(&v7);
  LODWORD(a2) = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(Parameter);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v11);
  return (unsigned int)a2;
}
