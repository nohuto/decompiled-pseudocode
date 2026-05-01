/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18000E98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::___IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v9 = 0LL;
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
           &v9);
    if ( v7 < 0 )
      goto LABEL_5;
    v5 = v9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
LABEL_5:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v7);
  return (unsigned int)v7;
}
