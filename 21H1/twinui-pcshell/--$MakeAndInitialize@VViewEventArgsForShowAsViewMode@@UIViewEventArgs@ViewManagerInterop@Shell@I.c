/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@W4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAW4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@$$QEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@$$QEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x18027CD58
 * Callers:
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@W4ViewGrouping@345@PEAUIAsyncCallback@@@Z @ 0x180286F50 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_18007D4C0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x18027E5F4 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForShowAsViewMode@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowAsViewMode@@@Z @ 0x180280684 (-Attach@-$ComPtr@VViewEventArgsForShowAsViewMode@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForShowA.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180280834 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_180280834.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@W4ViewSizePreference@896@3USize@Foundation@6@W4ViewGrouping@896@PEAUIAsyncCallback@@@Z @ 0x1802844D8 (-RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping &,IAsyncCallback * &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _QWORD *a8,
        _DWORD *a9,
        _QWORD *a10)
{
  ViewEventArgsForShowAsViewMode *v14; // rax
  int CanCastTo; // edi
  ViewEventArgsForShowAsViewMode *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = (ViewEventArgsForShowAsViewMode *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    v16 = ViewEventArgsForShowAsViewMode::ViewEventArgsForShowAsViewMode(v14);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForShowAsViewMode>::Attach(&v22, v16);
    v17 = *a4;
    v18 = v22;
    CanCastTo = ViewEventArgsForShowAsViewMode::RuntimeClassInitialize(
                  v22,
                  *a2,
                  *a3,
                  v17,
                  *a5,
                  *a6,
                  *a7,
                  *a8,
                  *a9,
                  *a10);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v19, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v18;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::CanCastTo(
                      v18,
                      v20,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::Release(v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
