/*
 * XREFs of ??1operation_guard@wil@@QEAA@XZ @ 0x18023F520
 * Callers:
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18023F098 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 * Callees:
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@Z$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180246A98 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     ?release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z @ 0x180246CF4 (-release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@Z$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x180246DE0 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@Z$1-release_oper.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x180246E48 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

void __fastcall wil::operation_guard::~operation_guard(wil::operation_guard *this)
{
  struct wil::operation_guard *v2; // rdx
  wil::details *v3; // [rsp+38h] [rbp+10h] BYREF

  wil::operation_guard::acquire(this, &v3);
  if ( v3 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::operation_guard *,void (*)(wil::operation_guard *),&void wil::details::release_operation_guard_reference(wil::operation_guard *),wistd::integral_constant<unsigned __int64,1>,wil::operation_guard *,wil::operation_guard *,0,std::nullptr_t>>::reset(
      &v3,
      0LL);
    *((_BYTE *)this + 8) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) > 1 )
      wil::slim_event_t<1>::wait(this);
    if ( v3 )
      wil::details::release_operation_guard_reference(v3, v2);
  }
}
