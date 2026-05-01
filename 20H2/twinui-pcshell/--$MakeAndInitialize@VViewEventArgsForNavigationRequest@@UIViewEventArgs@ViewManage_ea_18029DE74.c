/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18029DE74
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A93BC (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0ViewEventArgsForNavigationRequest@@QEAA@XZ @ 0x18029F8E0 (--0ViewEventArgsForNavigationRequest@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x1802A19C0 (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForNavigationRequest,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Foundation::Collections::IPropertySet * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  ViewEventArgsForNavigationRequest *v5; // rax
  ViewEventArgsForNavigationRequest *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (ViewEventArgsForNavigationRequest *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = ViewEventArgsForNavigationRequest::ViewEventArgsForNavigationRequest(v5);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSwitch>::Attach(&v11, v6);
    v7 = *a2;
    v8 = v11;
    v9 = (__int64 *)(v11 + 56);
    *(_DWORD *)(v11 + 48) = 2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v9, v7);
    *a1 = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
