/*
 * XREFs of ??$MakeAndInitialize@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18019A26C
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18019A550 (-ActivateInstance@-$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@I.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@QEAA@XZ @ 0x18019A3B8 (--0CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019A5A4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,IInspectable,>(
        __int64 *a1)
{
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *v2; // rax
  int CanCastTo; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // rdx

  *a1 = 0LL;
  v2 = (Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *)operator new(
                                                                                   0x48uLL,
                                                                                   (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::CustomShellExperienceRepository(v2);
    *a1 = 0LL;
    v5 = v4;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, v6) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::CanCastTo(
                    v5,
                    v7,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
