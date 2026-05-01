/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1802834F0
 * Callers:
 *     ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x180283CB0 (-GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800803E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180148DD4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180148DD4.c)
 *     ??0ApplicationViewTabInsertionContext@@QEAA@XZ @ 0x180283940 (--0ApplicationViewTabInsertionContext@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTabInsertionContext,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Windows::Foundation::Collections::IPropertySet *>(
        __int64 **a1,
        __int64 *a2)
{
  ApplicationViewTabInsertionContext *v4; // rax
  int CanCastTo; // edi
  __int64 *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  _DWORD *v10; // rdx

  *a1 = 0LL;
  v4 = (ApplicationViewTabInsertionContext *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = (__int64 *)ApplicationViewTabInsertionContext::ApplicationViewTabInsertionContext(v4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v6 + 8, *a2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_d36c7944_6870_5117_83e4_4173719a9a38, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v6;
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v8, v9) )
    {
      *a1 = v6;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)(v6 + 1),
                    v10);
      if ( CanCastTo < 0 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(__int64 *))(**a1 + 8))(*a1);
  }
LABEL_10:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release((__int64)v6);
  return (unsigned int)CanCastTo;
}
