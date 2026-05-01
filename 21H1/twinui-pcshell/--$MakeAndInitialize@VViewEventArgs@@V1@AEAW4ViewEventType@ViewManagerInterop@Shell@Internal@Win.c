/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180068B18
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18002DE30 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180068978 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18028B998 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  __int64 *v8; // rsi
  volatile int *v9; // rdx
  LPUNKNOWN v10; // rdi
  __int64 v11; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  signed __int64 v16; // rax
  int v17; // r10d
  signed __int64 v18; // rtt
  signed __int64 v19; // rax
  unsigned int v20; // ecx
  signed __int64 v21; // rtt
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-30h]
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v23 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v23;
  if ( !v23 )
    return 2147942414LL;
  ppunkMarshal = 0LL;
  v8 = v23 + 4;
  v23[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[4] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v10 = ppunkMarshal;
    v11 = *v8;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    if ( *v8 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
      v10,
      &GUID_00000003_0000_0000_c000_000000000046,
      v6 + 4);
  }
  v13 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
  }
  v6[7] = 0LL;
  *v6 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  v6[10] = 1LL;
  v6[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v25 = v6;
  *v6 = &ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  v6[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
  v14 = *a3;
  *((_DWORD *)v6 + 12) = *a2;
  v15 = v6[7];
  if ( v15 != v14 )
  {
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = v6[7];
    }
    v22 = v15;
    v6[7] = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  v16 = v6[10];
  v17 = 0x7FFFFFFF;
  while ( v16 >= 0 )
  {
    if ( (_DWORD)v16 != 0x7FFFFFFF )
    {
      v18 = v16;
      v16 = _InterlockedCompareExchange64(v6 + 10, v16 + 1, v16);
      if ( v18 != v16 )
        continue;
    }
    goto LABEL_21;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v16 + 16));
LABEL_21:
  *a1 = v25;
  v19 = v6[10];
  while ( v19 >= 0 )
  {
    if ( (_DWORD)v19 == v17 )
      return 0LL;
    v20 = v19 - 1;
    v21 = v19;
    v19 = _InterlockedCompareExchange64(v6 + 10, v19 - 1, v19);
    if ( v21 == v19 )
      goto LABEL_27;
  }
  v20 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v19 + 16), v9);
LABEL_27:
  result = 0LL;
  if ( !v20 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v25 + 64LL))(v25, 1LL);
    result = 0LL;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      return 0LL;
    }
  }
  return result;
}
