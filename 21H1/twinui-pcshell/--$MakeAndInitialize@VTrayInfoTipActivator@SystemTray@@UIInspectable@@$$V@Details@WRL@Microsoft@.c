/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipActivator@SystemTray@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180359C9C
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180359EB0 (-ActivateInstance@-$SimpleActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180124694 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180124694.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A8FD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITab_ea_1801A8FD0.c)
 *     ??0TrayInfoTipActivator@SystemTray@@QEAA@XZ @ 0x180359D80 (--0TrayInfoTipActivator@SystemTray@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipActivator,IInspectable,>(
        __int64 *a1)
{
  SystemTray::TrayInfoTipActivator *v2; // rax
  int CanCastTo; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  _DWORD *v8; // rcx
  _DWORD *v9; // r9

  *a1 = 0LL;
  v2 = (SystemTray::TrayInfoTipActivator *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = SystemTray::TrayInfoTipActivator::TrayInfoTipActivator(v2);
  *a1 = 0LL;
  v5 = v4;
  if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v6, v7) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v8, &GUID_6152e266_8805_4b1e_9fc9_4df263e44e8b) )
    {
      *a1 = v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v5 + 8,
                    v9);
      if ( CanCastTo < 0 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_10:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
