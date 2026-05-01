/*
 * XREFs of ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803D5A38
 * Callers:
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803D5638 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803D68D0 (-GetChromeConfigurationForView@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C6B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x180093508 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180154DA8 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x18015DE60 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1803D90CC (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 */

__int64 __fastcall TabletModePositioner::CreateTitlebarConfiguration(
        struct IApplicationView *a1,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  unsigned int v2; // edi
  TitlebarOverlayHelpers *v4; // rcx
  volatile int *v5; // rbx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  const struct _GUID *v8; // rdx
  int CanCastTo; // eax
  void (*v10)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = (volatile int *)a1;
  v2 = 0;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v13);
  v5 = v13;
  if ( !v13 )
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_18;
  }
  if ( TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(v4) )
  {
    *((_WORD *)v5 + 24) = 1;
    *((_DWORD *)v5 + 13) = 1;
    *((_DWORD *)v5 + 14) = 1;
  }
  else
  {
    *((_WORD *)v5 + 24) = 257;
    *(_QWORD *)(v5 + 13) = 1LL;
  }
  *((_DWORD *)v5 + 22) = 0;
  if ( IsPPIEdition() )
  {
    ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v5, 55, 16);
    *((_DWORD *)v5 + 19) = 0;
  }
  else
  {
    ApplicationViewTitlebarConfiguration::SetVisibleButtons((__int64)v5, 55, 20);
    *((_DWORD *)v5 + 19) = 64;
  }
  *(_QWORD *)(v5 + 17) = 255LL;
  *((_DWORD *)v5 + 20) = 1;
  *((_BYTE *)v5 + 84) = 1;
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a2 = (struct IApplicationViewTitlebarConfiguration *)v5;
    v10 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    goto LABEL_17;
  }
  if ( InlineIsEqualGUID(v6, v7) )
  {
    *a2 = (struct IApplicationViewTitlebarConfiguration *)v5;
LABEL_15:
    v10 = *(void (**)(void))(*(_QWORD *)*a2 + 8LL);
LABEL_17:
    v10();
    goto LABEL_18;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 2), v8, (void **)a2);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
  if ( CanCastTo >= 0 )
    goto LABEL_15;
LABEL_18:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v13);
  return v2;
}
