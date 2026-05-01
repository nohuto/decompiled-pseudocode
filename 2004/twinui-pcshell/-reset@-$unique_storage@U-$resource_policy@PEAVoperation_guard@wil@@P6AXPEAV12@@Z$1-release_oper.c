/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@Z$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x180246DE0
 * Callers:
 *     ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAA@XZ @ 0x18023F2B8 (--1AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Sh.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x18023F520 (--1operation_guard@wil@@QEAA@XZ.c)
 * Callees:
 *     ?release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z @ 0x180246CF4 (-release_operation_guard_reference@details@wil@@YAXPEAVoperation_guard@2@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::operation_guard *,void (*)(wil::operation_guard *),&void wil::details::release_operation_guard_reference(wil::operation_guard *),wistd::integral_constant<unsigned __int64,1>,wil::operation_guard *,wil::operation_guard *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  struct wil::operation_guard *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::release_operation_guard_reference(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
