/*
 * XREFs of ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801E6FFC
 * Callers:
 *     ?GetExperienceManager@ScreenClippingExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801E8930 (-GetExperienceManager@ScreenClippingExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A1B50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CScreenClippingExperienceManager@@QEAA@XZ @ 0x1801E79F0 (--0CScreenClippingExperienceManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801E82F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801E82F0.c)
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801EAD64 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScreenClippingExperienceManager,IInspectable,IServiceProvider * &>(
        CScreenClippingExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CScreenClippingExperienceManager *v4; // rax
  int CanCastTo; // edi
  CScreenClippingExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  __int64 v10; // r9

  *a1 = 0LL;
  v4 = (CScreenClippingExperienceManager *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = CScreenClippingExperienceManager::CScreenClippingExperienceManager(v4);
  CanCastTo = CScreenClippingExperienceManager::RuntimeClassInitialize(v6, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(CScreenClippingExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_93acf1bc_b1c9_423a_9fa5_d80c0935ddee) )
      {
        *a1 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::CanCastTo(
                      (char *)v6 + 8,
                      v10);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(CScreenClippingExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release((__int64)v6);
  return (unsigned int)CanCastTo;
}
