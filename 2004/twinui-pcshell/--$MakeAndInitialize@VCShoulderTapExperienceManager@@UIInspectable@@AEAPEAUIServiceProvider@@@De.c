/*
 * XREFs of ??$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801CFB9C
 * Callers:
 *     ?GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801D07A0 (-GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIIn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007CFB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18018648C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18018648C.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x1801D0398 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D1A58 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CShoulderTapExperienceManager,IInspectable,IServiceProvider * &>(
        CShoulderTapExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CShoulderTapExperienceManager *v4; // rax
  int CanCastTo; // edi
  CShoulderTapExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // r9

  *a1 = 0LL;
  v4 = (CShoulderTapExperienceManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = CShoulderTapExperienceManager::CShoulderTapExperienceManager(v4);
  CanCastTo = CShoulderTapExperienceManager::RuntimeClassInitialize(v6, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(CShoulderTapExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_8667db0d_6960_465f_b9a4_c461863efa91) )
      {
        *a1 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                      (__int64)v6 + 8,
                      v10);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(CShoulderTapExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release((__int64)v6);
  return (unsigned int)CanCastTo;
}
