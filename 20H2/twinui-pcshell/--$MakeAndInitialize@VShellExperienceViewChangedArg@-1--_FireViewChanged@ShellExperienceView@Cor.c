/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x1800143B8
 * Callers:
 *     ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x18001418C (-_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Exper.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800144A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewChangedArg@Experi.c)
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007AE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180082BEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___MakeAndInitialize_VShellExperienceViewChangedArg__1___FireViewChanged_ShellExperienceView_Cortana_TwinUI__AEAAJW4ShellExperienceViewChangeType_Experience_Shell_Internal_Windows__J_Z_UIShellExperienceViewChangedArg_789Windows__AEAW46789Windows__AEAJ_Details_WRL_Microsoft__YAJPEAPEAUIShellExperienceViewChangedArg_Experience_Shell_Internal_Windows__AEAW4ShellExperienceViewChangeType_4567_AEAJ_Z(
        _QWORD *a1,
        int *a2,
        _DWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int CanCastTo; // edi

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return (unsigned int)-2147024882;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>(v6);
  *v7 = off_180489278;
  v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  v8 = *a2;
  *((_DWORD *)v7 + 9) = *a3;
  *((_DWORD *)v7 + 8) = v8;
  *a1 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_1b7d8b95_d5cb_4cff_874f_11fdf16217ac,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v7;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    CanCastTo = 0;
    goto LABEL_7;
  }
  if ( (unsigned int)InlineIsEqualGUID(v10, v10) )
  {
    *a1 = v7;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>::CanCastTo(
                  v7 + 1,
                  v11,
                  a1);
    if ( CanCastTo < 0 )
      goto LABEL_7;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
LABEL_7:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v7);
  return (unsigned int)CanCastTo;
}
