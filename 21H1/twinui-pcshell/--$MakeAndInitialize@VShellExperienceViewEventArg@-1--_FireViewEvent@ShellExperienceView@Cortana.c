/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceViewEventArg@?1??_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAU6@AEAPEAU789Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAUHSTRING__@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18000F9A8
 * Callers:
 *     ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000F508 (-_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collect.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011700 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::ShellExperienceViewEventArg @ 0x180011764 (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--ShellE.c)
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C7E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180083C3C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Experience::UIShellExperienceViewEventArg::Z::MakeAndInitialize<`TwinUI::Cortana::ShellExperienceView::_FireViewEvent'::`2'::ShellExperienceViewEventArg,AJPEAUHSTRING__ &,Windows::Foundation::Collections::IPropertySet *>(
        __int64 *a1,
        HSTRING *a2,
        __int64 *a3)
{
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  int v10; // eax
  int CanCastTo; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v19; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return (unsigned int)-2147024882;
  v7 = TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::ShellExperienceViewEventArg(v6);
  v8 = *a3;
  v9 = v7;
  v19 = *a2;
  v10 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(v7 + 32), &v19);
  CanCastTo = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v10,
      v17);
  }
  else
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v9 + 40, v8);
    CanCastTo = 0;
  }
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(
                         &GUID_945f341f_df0f_41d1_adae_5b9dabbb2139,
                         &GUID_00000000_0000_0000_c000_000000000046)
      || (unsigned int)InlineIsEqualGUID(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v13, v14) )
      {
        *a1 = v9;
        CanCastTo = 0;
LABEL_9:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_10;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>::CanCastTo(
                    v9 + 8,
                    v15,
                    a1);
      if ( CanCastTo >= 0 )
        goto LABEL_9;
    }
  }
LABEL_10:
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v9);
  return (unsigned int)CanCastTo;
}
