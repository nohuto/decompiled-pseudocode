/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Z @ 0x18029E800
 * Callers:
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x1802AAA3C (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x18005CB1C (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x18005CBFC (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18007FEEC (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x1802A22B0 (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802A25A4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_1802A25A4.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const * &>(
        ViewEventArgsForPropertyChanged **a1,
        const unsigned __int16 **a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  int CanCastTo; // edi
  ViewEventArgsForPropertyChanged *v6; // rax
  const unsigned __int16 *v7; // rdx
  ViewEventArgsForPropertyChanged *v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  ViewEventArgsForPropertyChanged *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForSwitch>::Attach(&v12, v6);
    v7 = *a2;
    v8 = v12;
    CanCastTo = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v12, v7);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v8;
        (*(void (__fastcall **)(ViewEventArgsForPropertyChanged *))(*(_QWORD *)v8 + 8LL))(v8);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::CanCastTo(
                      v8,
                      v10,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(ViewEventArgsForPropertyChanged *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
