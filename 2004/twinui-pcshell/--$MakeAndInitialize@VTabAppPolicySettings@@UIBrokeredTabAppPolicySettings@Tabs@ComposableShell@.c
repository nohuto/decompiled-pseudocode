/*
 * XREFs of ??$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Z @ 0x18026490C
 * Callers:
 *     ?v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180281CA0 (-v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180148DD4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180148DD4.c)
 *     ??0TabAppPolicySettings@@QEAA@XZ @ 0x180269988 (--0TabAppPolicySettings@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802767C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBro_ea_1802767C0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabAppPolicySettings,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,IServiceProvider * &>(
        __int64 **a1,
        __int64 *a2)
{
  TabAppPolicySettings *v4; // rax
  int CanCastTo; // edi
  __int64 *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  _DWORD *v10; // rdx

  *a1 = 0LL;
  v4 = (TabAppPolicySettings *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = (__int64 *)TabAppPolicySettings::TabAppPolicySettings(v4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v6 + 8, *a2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ee654811_7557_4bad_8afd_7a28272e4d92, &GUID_00000000_0000_0000_c000_000000000046)
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
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)CanCastTo;
}
