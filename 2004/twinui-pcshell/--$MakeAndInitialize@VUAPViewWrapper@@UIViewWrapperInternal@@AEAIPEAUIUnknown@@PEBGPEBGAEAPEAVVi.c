/*
 * XREFs of ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3AEAPEAVViewEventDispatcher@@@Z @ 0x18029E5BC
 * Callers:
 *     ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1802A2C78 (-CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWra.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A9CAC (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0UAPViewWrapper@@QEAA@XZ @ 0x1802A0114 (--0UAPViewWrapper@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAAXPEAVUAPViewWrapper@@@Z @ 0x1802A227C (-Attach@-$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAAXPEAVUAPViewWrapper@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802A2984 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1802A2984.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A5DB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1802A5DB0.c)
 *     ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x1802CAA00 (-RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher * &>(
        UAPViewWrapper **a1,
        unsigned int *a2,
        struct IUnknown **a3,
        const unsigned __int16 **a4,
        const unsigned __int16 **a5,
        struct ViewEventDispatcher **a6)
{
  UAPViewWrapper *v10; // rax
  int CanCastTo; // edi
  UAPViewWrapper *v12; // rax
  const unsigned __int16 *v13; // r9
  UAPViewWrapper *v14; // rbx
  _DWORD *v15; // rcx
  __int64 v16; // r9
  UAPViewWrapper *v18; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (UAPViewWrapper *)operator new(0x240uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = UAPViewWrapper::UAPViewWrapper(v10);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<UAPViewWrapper>::Attach(&v18, v12);
    v13 = *a4;
    v14 = v18;
    CanCastTo = UAPViewWrapper::RuntimeClassInitialize(v18, *a2, *a3, v13, *a5, *a6);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v15, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v14;
        (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v14 + 8LL))(v14);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
                      (char *)v14 + 8,
                      v16,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
