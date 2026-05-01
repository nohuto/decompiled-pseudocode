/*
 * XREFs of ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18030F1AC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlAltTabViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180311200 (-CreateInstance@-$SimpleClassFactory@VXamlAltTabViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x18030FDF8 (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAltTabViewHost@@@Z @ 0x180310C9C (-Attach@-$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlAltTabViewHost@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@@Details@23@UIXamlViewHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180310D08 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180310D08.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x180311D4C (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJXZ @ 0x18031247C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAltTabViewHost,IUnknown,>(XamlAltTabViewHost **a1)
{
  XamlAltTabViewHost *v2; // rax
  int CanCastTo; // edi
  XamlAltTabViewHost *v4; // rax
  XamlAltTabViewHost *v5; // rbx
  __int64 v6; // rdx
  XamlAltTabViewHost *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (XamlAltTabViewHost *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = XamlAltTabViewHost::XamlAltTabViewHost(v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<XamlAltTabViewHost>::Attach(&v8, v4);
    v9 = 0LL;
    v5 = v8;
    CanCastTo = XamlAltTabViewHost::RuntimeClassInitialize(v8);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)v5 + 8LL))(v5);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAltTabViewHost>>,IXamlViewHost>::CanCastTo(
                      v5,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
