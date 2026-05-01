/*
 * XREFs of ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802F7D80
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlAllUpViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803004E0 (-CreateInstance@-$SimpleClassFactory@VXamlAllUpViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0XamlAllUpViewHost@@QEAA@XZ @ 0x1802FB6DC (--0XamlAllUpViewHost@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAllUpViewHost@@@Z @ 0x1802FEE10 (-Attach@-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAllUpViewHost@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802FF590 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@V-.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1803033D4 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ @ 0x180305D0C (-RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAllUpViewHost,IUnknown,>(XamlAllUpViewHost **a1)
{
  XamlAllUpViewHost *v2; // rax
  int CanCastTo; // edi
  XamlAllUpViewHost *v4; // rax
  XamlAllUpViewHost *v5; // rbx
  __int64 v6; // rdx
  XamlAllUpViewHost *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (XamlAllUpViewHost *)operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = XamlAllUpViewHost::XamlAllUpViewHost(v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<XamlAllUpViewHost>::Attach(&v8, v4);
    v9 = 0LL;
    v5 = v8;
    CanCastTo = XamlAllUpViewHost::RuntimeClassInitialize(v8);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(XamlAllUpViewHost *))(*(_QWORD *)v5 + 8LL))(v5);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                      v5,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(XamlAllUpViewHost *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
