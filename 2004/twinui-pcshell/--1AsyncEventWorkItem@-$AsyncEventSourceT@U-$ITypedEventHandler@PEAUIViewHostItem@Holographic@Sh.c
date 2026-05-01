/*
 * XREFs of ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAA@XZ @ 0x18023F2B8
 * Callers:
 *     ??_EAsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAAPEAXI@Z @ 0x18023F9F0 (--_EAsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@S.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800164D4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z @ 0x180246CF4 (-release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@Z$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x180246DE0 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@Z$1-release_oper.c)
 */

void **__fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventWorkItem::~AsyncEventWorkItem(
        _QWORD *a1)
{
  wil::details **v2; // rbx
  struct wil::operation_guard *v3; // rdx
  volatile int *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r10
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  void **result; // rax

  v2 = (wil::details **)(a1 + 19);
  *a1 = &wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventWorkItem::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<wil::operation_guard *,void (*)(wil::operation_guard *),&void wil::details::release_operation_guard_reference(wil::operation_guard *),wistd::integral_constant<unsigned __int64,1>,wil::operation_guard *,wil::operation_guard *,0,std::nullptr_t>>::reset(
    a1 + 19,
    0LL);
  if ( *v2 )
    wil::details::release_operation_guard_reference(*v2, v3);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)(a1 + 4));
  v5 = a1[3];
  if ( v5 )
  {
    a1[3] = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v4) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))a1[1];
  result = &wil::details::AsyncEventWorkItemBase::`vftable';
  a1[1] = 0LL;
  *a1 = &wil::details::AsyncEventWorkItemBase::`vftable';
  if ( v7 )
    return (void **)(**v7)(v7, 1LL);
  return result;
}
