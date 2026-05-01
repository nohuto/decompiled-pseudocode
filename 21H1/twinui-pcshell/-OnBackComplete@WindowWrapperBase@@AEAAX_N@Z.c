/*
 * XREFs of ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1802BD874
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_fd6692e6a990898cf57d11f1e4952988___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1802BD7E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1802BD7E0.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18022D618 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x1802BAD84 (--$MakeOrThrow@VViewHandledEventArgs@@AEA_N@wil@@YA-AV-$ComPtr@VViewHandledEventArgs@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowWrapperBase::OnBackComplete(WindowWrapperBase *this, char a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IInspectable *v6; // [rsp+50h] [rbp+20h] BYREF
  char v7; // [rsp+58h] [rbp+28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v7 = a2;
  v8 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 36) + 200LL))(*((_QWORD *)this + 36), SRWLock);
  v3 = 0LL;
  if ( *((_BYTE *)this + 192) )
  {
    *((_BYTE *)this + 192) = 0;
    v4 = (__int64 *)((char *)this + 200);
    if ( &v9 != (__int64 *)((char *)this + 200) )
    {
      v3 = *v4;
      *v4 = 0LL;
    }
    v9 = 0LL;
    v8 = v3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  v6 = 0LL;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
    if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                (Microsoft::WRL::WeakRef *)&v8,
                &GUID_4874a3f0_c856_52e6_ab24_d29fbf386438,
                &v6) >= 0 )
    {
      wil::MakeOrThrow<ViewHandledEventArgs,bool &>(&v9, &v7);
      ((void (__fastcall *)(struct IInspectable *, char *, __int64))v6->lpVtbl->GetIids)(v6, (char *)this + 8, v9);
      Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
