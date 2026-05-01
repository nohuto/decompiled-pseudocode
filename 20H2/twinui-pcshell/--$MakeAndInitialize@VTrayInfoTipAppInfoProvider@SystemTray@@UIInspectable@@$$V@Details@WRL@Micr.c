/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipAppInfoProvider@SystemTray@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180379424
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1803798C0 (-ActivateInstance@-$SimpleActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Mic.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006D810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180148C24 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180148C24.c)
 *     ??0TrayInfoTipAppInfoProvider@SystemTray@@QEAA@XZ @ 0x180379714 (--0TrayInfoTipAppInfoProvider@SystemTray@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfoProvider,IInspectable,>(
        __int64 *a1)
{
  SystemTray::TrayInfoTipAppInfoProvider *v2; // rax
  int CanCastTo; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  _DWORD *v8; // rcx
  _DWORD *v9; // r9

  *a1 = 0LL;
  v2 = (SystemTray::TrayInfoTipAppInfoProvider *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = SystemTray::TrayInfoTipAppInfoProvider::TrayInfoTipAppInfoProvider(v2);
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
    if ( InlineIsEqualGUID(v8, &GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67) )
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
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
