/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180040E54
 * Callers:
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue_::_1_::dtor$4 @ 0x1800CE6A7 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--Subscriptio_ea_1800CE6A7.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService_::_1_::dtor$1 @ 0x1800D3C91 (_CreativeFramework--Actions--SetLockScreenHotspotsService--SetLockScreenHotspotsSer_ea_1800D3C91.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
